#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int list(char **args){
  char data[256];
  FILE* fptr = fopen("data.txt", "r");

  if (fptr == NULL)
  {
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
      printf("%s\n", text);
    }
    fclose(fptr);
  }
    return 0; 
}
