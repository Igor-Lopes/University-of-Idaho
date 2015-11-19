/*
 * CS270 - System Software
 * Dr. Rinker
 * Homework #6
 * November 18th, 2015
 * Igor Lopes
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>

int checkDOS(char *file){
  FILE *f = fopen(file, "r");
  char carriage [2];
  char line [256];
  while(fgets(line, sizeof(line), f)){
    sscanf(line, "%2s", carriage);
    if(strcmp(carriage, "\\r") != 0 ){
      return -1;
    }
  }
  fclose(f);
  return 0;
}

int checkASC(char *file){
  FILE* f = fopen(file, "rb");
  fseek(f,0,SEEK_END);
  int check = 0;
  long lsize=0,i=0;
  lsize = ftell(f);
  rewind(f);
  int byte_limit = 127;
  int curr_byte;
  int max_byte = 0;
  while(i < lsize){
    int first = fgetc(f);
    i++;
    curr_byte = (unsigned)first;
    if(curr_byte > max_byte){
      max_byte = curr_byte;
    }
  }
  if(max_byte < 128){
    check = 0;
  } else {
    check = -1;
  }
fclose(f);
return check;
}

int checkPS(char *file){
  int check;
  FILE *f = fopen(file, "r");
  char line [256];
  fgets(line, sizeof(line), f);
  if(strstr(line, "%!PS-Adobe") != NULL){
    check = 0;
  } else {
    check = -1;
  }
  fclose(f);
  return check;
}

int checkELF(char *file){
  FILE* f = fopen(file, "rb");
  fseek(f,0,SEEK_END);
  int check = 0;
  int i;
  long lsize=0;
  lsize = ftell(f);
  rewind(f);
  int bytes[4];
  int ELF[3] = {'E','L','F'};
  for(i = 0; i < 4; i++){
    int first = fgetc(f);
    bytes[i] = (unsigned)first;
  }

  if(ELF[0] == bytes[1] && ELF[1] == bytes[2] && ELF[2] == bytes[3]){
    check = 0;
  } else {
    check = -1;
  }
fclose(f);
return check;
}

void  ls (){
DIR *d;
struct dirent *dir;
d = opendir(".");
if (d){
  printf("Listing files:\n");
  while ((dir = readdir(d)) != NULL){
    if (dir->d_type == DT_REG){
     printf("%s\n", dir->d_name);
    }
  }
   closedir(d);
 }
}

void  ls_f (){
DIR *d;
struct dirent *dir;
d = opendir(".");
if (d){
  printf("Listing files:\n");
  while ((dir = readdir(d)) != NULL){
      if (dir->d_type == DT_REG){
        printf("%s\n", dir->d_name);
        if(checkPS(dir->d_name) == 0){
          printf("      -File Guess: Post Script File\n");
        }
        else
        if(checkDOS(dir->d_name) == 0){
          printf("      -File Guess: DOS File\n");
        }
        else
        if(checkASC(dir->d_name) == 0){
          printf("      -File Guess: ASCII File\n");
        }
        else
        if(checkELF(dir->d_name) == 0){
          printf("      -File Guess: ELF File\n");
        } else {
          printf("      -File Guess: Unidentifiable binary file\n");
        }
      }
  }
   closedir(d);
 }
}

void ls_t(){
  DIR *d;
  struct dirent *dir;
  struct stat attr;
  d = opendir(".");
  if (d){
    while ((dir = readdir(d)) != NULL){
      if (dir->d_type == DT_REG){
        printf("%s\n", dir->d_name);
        stat(dir->d_name, &attr);
        printf("      - Last access time: %s", ctime(&attr.st_atime));
        printf("      - Last modification time: %s", ctime(&attr.st_mtime));
        printf("      - Last status change time: %s\n", ctime(&attr.st_ctime));
      }
     }
     closedir(d);
   }
}

int main (int argc, char *argv[]){
  if(argc == 1){
    ls();
  } else {
    if(strcmp(argv[1], "-t") == 0 ){
      ls_t();
    }
    if(strcmp(argv[1], "-f") == 0 ){
      ls_f();
    }
  }
return 0;
}
