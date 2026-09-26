#include <stdio.h>
#include <string.h>
#include "commands.h"

#define amountOfCommands 4

int execute(char** args, int length){
  command cmds[amountOfCommands] = {
    {"help", help},
    {"about", about},
    {"add", add},
    {"quit", quit}
  };

  int returnStatus = -1;
  for(int i = 0; i < amountOfCommands; i++){
    if(strcmp(args[0], cmds[i].commandName) == 0){
      returnStatus = cmds[i].ptr(args);
    }
  }
  if(returnStatus == -1){
    printf("The command you entered was faulty\n");
  }
  return returnStatus;
}
