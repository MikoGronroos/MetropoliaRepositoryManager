#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* get_alias(char* input){
  char* find = strchr(input, ':');
  int index = find - input;
  char* text = malloc(sizeof(char)*128);
  strncpy(text, input, index);
  text[index] = '\0';
  return text;
}
