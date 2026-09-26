#include <stdio.h>
#include <stdlib.h>

int add(char **args){
  FILE* fptr;
  fptr = fopen("data.txt", "a");
  
  if(fptr == NULL){
  }else{
    fputs(args[1], fptr);
    fputs(":", fptr);
    fputs(args[2], fptr);
    fputs("\n", fptr);
    fclose(fptr);
  }
  return 0;
}
