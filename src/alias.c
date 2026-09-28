#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* get_alias(char* input){
  char* find = strchr(input, ':');
  if(find == NULL){
    return NULL;
  }
  int index = find - input;
  char* text = malloc(index+1);
  if(text == NULL){
    return NULL;
  }
  strncpy(text, input, index);
  text[index] = '\0';
  return text;
}
