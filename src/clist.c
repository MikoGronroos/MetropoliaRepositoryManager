#include <stdlib.h>
#include <stdio.h>

int list(char **args){
  char data[50];
  FILE* fptr = fopen("data.txt", "r");

  if (fptr == NULL)
  {
  }
  else
  {
    while (fgets(data, 50, fptr) != NULL)
    {
      printf("%s", data);
    }
    fclose(fptr);
  }
    return 0; 
}
