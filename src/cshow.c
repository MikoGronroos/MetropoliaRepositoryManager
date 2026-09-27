#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int show(char **args, int length){
  char data[256];
  FILE* fptr = fopen("data.txt", "r");
  char* allText = "all";
  if(length <= 1 || length > 2){
    printf("Invalid amount of arguments\n");
    return 0;
  }
  if (fptr == NULL)
  {
    printf("Couldn't open data file\n");
    return 0;
  }
  while (fgets(data, 256, fptr) != NULL)
  {
    char* find = strchr(data, ':');
    int index = find - data;
    char text[128];
    strncpy(text, data, index);
    text[index] = '\0';
    if(strncmp(text, args[1], strlen(text)) == 0 || strncmp(allText, args[1], strlen(allText)) == 0){
      printf("%s", data); 
    } 
  }
  fclose(fptr);
  return 0; 
}
