open(input, $ARGV[0]) or die "It was not possible to open the file";

open(output, ">", $ARGV[1]) or die "It was not possible to create the file";

while(<input>){
	print output $_;
}

close(input);
close(output);
