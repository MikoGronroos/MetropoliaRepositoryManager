#include <stdio.h>
#include <string.h>
#include "commands.h"

int execute(char* input){
  
  command cmds[2] = {
    {"help", help},
    {"about", about}
  };

  int error = 1; 
  for(int i = 0; i < 2; i++){
    if(strcmp(input, cmds[i].commandName) == 0){
      cmds[i].ptr();
      error = 0;
    }
  }
  return error;
}
