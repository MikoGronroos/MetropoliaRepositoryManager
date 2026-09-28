#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alias.h"

int del(char** args, int length){
  if(length <= 1 || length > 2){
    printf("Invalid amount of arguments\n");
    return 0;
  }  
  char data[256];
  FILE* fptr = fopen("data.txt", "r");
  FILE* fptr2 = fopen("databackup.txt", "a");
  if(fptr2 == NULL){
    printf("Couldn't create backup file");
  }else if (fptr == NULL){
    printf("Couldn't open data file");
  }
  else
  {
    while (fgets(data, 256, fptr) != NULL)
    {
      char* text = get_alias(data);
      if(text != NULL){
        if(strncmp(text, args[1], strlen(text)) != 0){
          fputs(data, fptr2); 
        }
        free(text);
      }
    }
    fclose(fptr);
    fclose(fptr2);
    remove("data.txt");
    rename("databackup.txt", "data.txt");
  }
    return 0; 
}
