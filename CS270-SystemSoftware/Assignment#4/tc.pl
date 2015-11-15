use Switch;
use File::Copy;
use File::Copy::Recursive;
use File::Compare;
use File::Path;
use File::Basename;
use Cwd;


print "-------------------------------Script Started-------------------------------\n";

$dir_path = $ENV{HOME} . "/trashcan";

if(@ARGV == 0){
	print "ERROR! - Invalid number of arguments\n";
	print "-------------------------------Script Terminated-------------------------------\n";
	exit 0
}

if( !-e $ENV{HOME} . "/trashcan"){
	print "Trash directory not found..\n";
	mkdir( $ENV{HOME} . "/trashcan" ) or die "ERROR! - Could not create directory\n";
	print "Trash directory created..\n";	
} else {

	print "Directory trashcan already exists\n"
}

sub emptyTrash{
	$target = $dir_path . "/*";
	$rm = system("rm -rf $target");
	print "trashcan directory cleaned!\n";
}

sub listFiles{
	print "Listing trashcan directory contents:\n";
	system("ls -l $dir_path");	
}

sub moveDir{
	$dir_name= shift;
        $check_dir = $dir_path . "/" . $dir_name;
        if(-e $dir_name){
                if(! -e $check_dir){
			print "Directory $dir_name doesn't exist in trashcan directory\n";
                        system("mv $dir_name $dir_path");
         	} else {
				$new_name = $dir_name;
                                $index = 0;
                                while (-e $check_dir){
                                        $new_name = $new_name . $index;
                                        $check_dir = "";
                                        $check_dir = $dir_path . "/" . $new_name;
                                        $index = $index + 1;
                                }	
			$new_path = $dir_path . "/" . $new_name;
			system("mv $dir_name $new_path");
			print "Directory $dir_name exists in trashcan directory. It will be renamed to: $new_name \n";      
		}
                print "Directory  $dir moved with success to trashcan directory!\n";
        } else {
                print "ERROR - Directory $dir doesn't exist!\n";
        }

}

sub moveFile{
	$file = shift;
	$check_file = $dir_path . "/" . $file;
	if(-e $file){
		if(-e $check_file){
			print "File $file already exists in trashcan directory!\n";
			if (compare($file, $check_file) == 0) {
  				print "File's contents are the same. File in trashan will be replaced\n";
				move($file,$dir_path) or die "ERROR - It was not possible to move the file $file to the trashcan directory!\n";
			} else {
				$new_name = basename($file);
				$check_dir = $dir_path . "/" . $new_name;
				$index = 0;
				while (-e $check_dir){
					$new_name = $new_name . "." . $index;
					$check_dir = "";
					$check_dir = $dir_path . "/" . $new_name;
					$index = $index + 1;
				}
				$new_path = $dir_path . "/" . $new_name;
				print "File's contents are not the same. File in trashan will be renamed to: $new_name\n";
				move($file,$new_path) or die "ERROR - It was not possible to move the file $file to the trashcan directory!\n";
			}	
		} else {
			move($file,$dir_path) or die "ERROR - It was not possible to move the file $file to the trashcan directory!\n";
		}      
		print "File $file moved with success to trashcan directory!\n";
	} else {
		print "ERROR - File $file doesn't exist!\n";
	}
}

sub retrieveDir{
	$file = shift;
        $retrieve_file = $dir_path . "/" . $file;
        $curr_dir = cwd();
        if(! -e $retrieve_file){
                print "Dir $retrieve_file doesn't exist in trashcan directory!\n";
        } else {
                if(-e $file){
                        print "File requested already exists with same name in your directory!\n";
                        print "Enter r to replace file or c to cancel operation:";
                        $option = <STDIN>;
                        chop $option;
                         switch($option){
                                  case "r"{
                                        system ("cp -a $retrieve_file $curr_dir");
                                        #print "File $file retrieved with success to your current directory!\n";
                                  }
                                  case "c"{
                                        print "Operation canceled for file $file!\n";
                                  }
                                  else {
                                        print "Invalid input!\n";
                                  }
                        }
                } else {
			print "debug: $curr_dir \n";
                        system ("cp -a $retrieve_file $curr_dir");
                        #print "File $file retrieved with success to your current directory!\n";
                }
        }
}

sub retrieveFile{
	$file = shift;
        $retrieve_file = $dir_path . "/" . $file;
	$curr_dir = cwd();
	if(! -e $retrieve_file){
		print "File $retrieve_file doesn't exist in trashcan directory!\n";	
	} else {
		if(-e $file){
			print "File requested already exists with same name in your directory!\n";
			print "Enter r to replace file or c to cancel operation:";
			$option = <STDIN>;
			chop $option;
			 switch($option){
				  case "r"{
					copy($retrieve_file, $curr_dir) or die "ERROR - It was not possible to copy the file $file from the trashcan to your directory!\n"; 
				  	print "File $file retrieved with success to your current directory!\n";
				  }
			          case "c"{
					print "Operation canceled for file $file!\n";
				  }
				  else {
					print "Invalid input!\n";
				  }				
			}	
		} else {
			copy($retrieve_file, $curr_dir);
			print "File $file retrieved with success to your current directory!\n";
		}
	}
}

for($i = 0; $i < @ARGV; $i++){
	$curr_file = $ARGV[$i];
        switch($ARGV[0]){
			case "-e"{
				if($i == 0){
					emptyTrash();
				} else {
                                        moveFile($curr_file);
                                }
			}	
			case "-i"{
				 if($i > 0){
				 	print "Are you sure that you want to move the file: $ARGV[$i] to the trashcan directory? y/n\n";
				 	$option = <STDIN>;
				 	chop $option;
				 	while($option ne 'y' && $option ne 'n'){
						print "Invalid entry! Please enter y/n\n";
				 	}
				 	if($option eq 'y'){
						if(-d $curr_file){
                                        		moveDir($curr_file)
                                	 	} else {
                                       			moveFile($curr_file);
						}
                                	 }
				 	elsif($option eq 'n'){
						print "File $curr_file skipped!\n";
				 	}
				  }
               		}	 
			case "-l"{
				if($i == 0){
					listFiles();
				} else {
					moveFile($curr_file);
				}
               		} 
			case "-r"{
				if($i > 0){
					$ret = $dir_path . "/" . $curr_file;
					if(-d $ret){
                                        	retrieveDir($curr_file)
                                	} else {
                                        	retrieveFile($curr_file);
						print "here";
                                	}
				}
			}
			else {
				if(-d $curr_file){
					moveDir($curr_file)
				} else {
					moveFile($curr_file);
				}
			}
		}
}

print "-------------------------------Script Ended-------------------------------\n";
