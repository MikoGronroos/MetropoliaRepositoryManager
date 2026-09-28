#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "alias.h"

int list(char **args, int length){
  if(length > 1){
    printf("Invalid amount of arguments\n");
    return 0;
  }
  char data[256];
  FILE* fptr = fopen("data.txt", "r");

  if (fptr == NULL)
  {
  }
  else
  {
    while (fgets(data, 256, fptr) != NULL)
    {
      char* text = get_alias(data);
      if(text != NULL){
        printf("%s\n", text);
        free(text);
      }
    }
    fclose(fptr);
  }
    return 0; 
}
