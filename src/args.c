#include <string.h>
#include <stdlib.h>
#include "args.h"

int free_args(arguments* args){ 
  for (int i = 0; i < args->length; i++) {
    free(args->args[i]);
  }
  free(args->args);
  free(args);
  return 0;
}

arguments* parse_args(char* input){
  arguments* args = malloc(sizeof(arguments));
  if(args == NULL){
    return NULL;
  }
  int amountOfArgs = 1;
  for(int i = 0; i < strlen(input); i++){
    if(input[i] == ' '){
      amountOfArgs++;
    }
  }
  args->length = amountOfArgs;
  args->args = malloc((amountOfArgs + 1) * sizeof(char *));
  int currentStrSize = 0;
  int offset = 0;
  int index = 0;
  for(int i = 0; i < strlen(input); i++){
    currentStrSize++;
    if(input[i] == ' ' || input[i+1] == '\0'){
      args->args[index] = (char *)malloc(currentStrSize+1);
      int k = 0;
      for(int j = offset; j < offset + currentStrSize - 1; j++){
        args->args[index][k] = input[j]; 
        k++;
      }
      args->args[index][k] = '\0'; 
      index++;
      offset += currentStrSize;
      currentStrSize = 0;
    }
  }
  return args;
}
