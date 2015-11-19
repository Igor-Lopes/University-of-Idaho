/*
 * this version, migrated from your HW#1, might need further adaptation
 * in order to work with a Bison parser.
 */
#include "ucode.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern char *yytext;
char *yyfilename;

char *getFileFormat( char* file){ //Returns the file extension
	char* ext = strrchr(file, '.');

	return ext;
}

int main(int argc, char *argv[]){
   int i;
   int cmp;
   char* file_format;
   file_format = getFileFormat( argv[1] );
   if (argc < 2) { 
	printf("usage: ucod file.dat\n"); exit(-1); 
   }
   
   file_format = getFileFormat( argv[1] );
   cmp  = strcmp(file_format, ".u");

   if(cmp != 0){ //Checks if it is a .u file.
	printf("ERROR: Invalid file type. Only .u files are accepted!\n");
	printf("%s\n",file_format);
	exit(-1);
   } else {
   	yyin = fopen(argv[1],"r");
   }
   
   printf("Processing the file: %s\n", argv[1]);
   
   if (yyin == NULL) { 
	printf("can't open/read '%s'\n", argv[1]); 
	exit(-1); 
        }

   yyfilename = argv[1];

   if ((i=yyparse()) != 0) {
	printf("parse failed\n");
      } else {
		printf("No errors found in the file: %s\n", argv[1]);
      }
 
  return 0;
}


