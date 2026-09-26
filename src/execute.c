#include <stdio.h>
#include <string.h>
#include "commands.h"

#define amountOfCommands 4

int execute(char* input){
  
  command cmds[amountOfCommands] = {
    {"help", help},
    {"about", about},
    {"add", add},
    {"quit", quit}
  };

  char *args[2] = {
    "help",
    "about",
  };
  int returnStatus = -1;
  for(int i = 0; i < amountOfCommands; i++){
    if(strcmp(input, cmds[i].commandName) == 0){
      returnStatus = cmds[i].ptr(args);
    }
  }
  if(returnStatus == -1){
    printf("The command you entered was faulty\n");
  }
  return returnStatus;
}
