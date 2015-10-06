# Igor Lopes - Homework #3 - 10/05/2015

use File::Copy;
use Switch;
use File::Basename;
use Archive::Tar;


print "Enter the path/name for the new temporary directory:\n";
$dir = <STDIN>;
chop $dir;
$enter_files = "yes";

while (-d $dir){
	print "Directory already exists. Please type a different name or path\n";
	$dir = <STDIN>;
	chop $dir;
} 

mkdir( $dir ) or die "ERROR -- Couldn't create $dir directory, $! Check permissions.";

print "Directory created!\n";

while($enter_files eq "yes"){
	print "Enter the path/name of the file:";
	$path = <STDIN>;
	chop $path;
	$base_name = basename($path);
	$file_name = $dir .'/'. $base_name;   
	if(-e $file_name){
		print "File already exists in the target directory!\n";
		print "Please Enter one of the following:\n overwrite - To overwrite the file.\n rename - to rename the file.\n cancel - to cancel operation.\n";
		$action = <STDIN>;
		chop $action;
		switch($action){
			case "overwrite"{
				copy ($path, $dir) or die "ERROR -- File was not copied. Check permissions, name and path !\n";
                		print "File overwritten with success !\n";
			}	
			case "rename"{
				 print "Enter the new name for the file:\n";
				 $new_base_name = <STDIN>;
				 chop $new_base_name;
				 $new_target = $dir .'/'. $new_base_name;
				 copy ($path, $new_target) or die "ERROR -- File was not copied. Check permissions, name and path !\n";
               		}	 
			case "cancel"{
				print "Operation canceled! File not overwritten\n";
               		} 
		}

	} else {
		copy ($path, $dir) or die "ERROR -- File was not copied. Check permissions, name and path !\n";
		print "File copied with success !\n";
	} 

	print "Enter another file to be copied? Type yes or no: \n";
	$enter_files = <STDIN>;
	chop $enter_files;
}
$dir_base = basename($dir);
@files = glob( $dir . '/*' );
Archive::Tar->create_archive( $dir_base . '.tgz', COMPRESS_GZIP, @files );

$rm_file = system("rm -rf $dir");

if($rm_file == 0){
	print "Temporary directory $dir successfully deleted!\n";
} else {
	print "ERROR -- Temporary directory NOT removed!\n";
}

print "Script terminated !\n";
