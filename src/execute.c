#include <stdio.h>
#include <string.h>
#include "commands.h"

#define amountOfCommands 3

int execute(char* input){
  
  command cmds[amountOfCommands] = {
    {"help", help},
    {"about", about},
    {"add", add}
  };

  int error = 1; 
  for(int i = 0; i < amountOfCommands; i++){
    if(strcmp(input, cmds[i].commandName) == 0){
      cmds[i].ptr();
      error = 0;
    }
  }
  return error;
}
