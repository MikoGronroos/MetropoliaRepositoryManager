#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int del(char** args){
  char data[256];
  FILE* fptr = fopen("data.txt", "r");
  FILE* fptr2 = fopen("databackup.txt", "a");
  if(fptr2 == NULL){
    printf("Couldn't create backup file");
  }else if (fptr == NULL){
    printf("Couldn't open data");
  }
  else
  {
    while (fgets(data, 256, fptr) != NULL)
    {
      char* find = strchr(data, ':');
      int index = find - data;
      char text[128];
      strncpy(text, data, index);
      text[index] = '\0';
      if(strncmp(text, args[1], strlen(args[1])) != 0){
        fputs(data, fptr2); 
      }
    }
    fclose(fptr);
    fclose(fptr2);
    remove("data.txt");
    rename("databackup.txt", "data.txt");
  }
    return 0; 
}
