#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alias.h"

int show(char **args, int length){
  if(length <= 1 || length > 2){
    printf("Invalid amount of arguments\n");
    return 0;
  }
  char data[256];
  FILE* fptr = fopen("data.txt", "r");
  char tokenBuffer[2][256];
  int tokenAmount = 0;
  char* allText = "all";
  if (fptr == NULL)
  {
    printf("Couldn't open data file\n");
    return 0;
  }
  while (fgets(data, 256, fptr) != NULL)
  {
    char* text = get_alias(data);
    if(text != NULL){
      if(strncmp(text, args[1], strlen(text)) == 0 || strncmp(allText, args[1], strlen(allText)) == 0){
        char* find = strtok(data, ";");
        while(find != NULL){
          strcpy(tokenBuffer[tokenAmount], find);
          find = strtok(NULL, ";");
          tokenAmount++;
        }
        tokenAmount = 0;
        printf("%-10s | %s", tokenBuffer[0], tokenBuffer[1]);
      } 
      free(text);
    }
  }
  fclose(fptr);
  return 0; 
}
