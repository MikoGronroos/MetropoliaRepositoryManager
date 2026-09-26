#include <stdio.h>
#include <string.h>
#include "execute.h"
#include <stdlib.h>
#include "args.h"

void clear_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

arguments* parse_args(char* input){
  arguments* args = malloc(sizeof(arguments));
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

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  char input[128];
  int running = 1;

  while(running == 1){
    fflush(stdout);
    fgets(input, sizeof(input), stdin);
    if(strlen(input) != 0){  
      arguments* args = parse_args(input);
      int status = execute(args->args, args->length);
      if(status == 2){
        running = 0;
      }
    }
  }
  return 0;
}
