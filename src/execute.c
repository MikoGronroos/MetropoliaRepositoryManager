#include <stdio.h>
#include <string.h>
#include "commands.h"

int execute(commandRegistry* registry, char* command){
  int error = 1; 
  for(int i = 0; i < registry->length; i++){
    if(strcmp(command, registry->commands[i]->commandName) == 0){
      registry->commands[i]->ptr();
      error = 0;
    }
  }
  return error;
}
