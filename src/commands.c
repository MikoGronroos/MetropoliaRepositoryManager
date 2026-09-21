#include <stdio.h>
#include "commands.h"
#include <stdlib.h>

int help(){
  
  printf("Here is a list of all the commands available\n");
  
}

int about(){
  
  printf("Mitten is a tool for managing repositories.\n");
  
}

int addToRegistry(commandRegistry *reg, command* com){
  if(reg->length <= 0){
    reg->commands = malloc(2 * sizeof(struct command));
  }else{
    command** newptr= realloc(reg->commands, (1 + reg->length) * sizeof(struct command));
    reg->commands = newptr;
  }
  reg->length++;
  reg->commands[reg->length-1] = com;
  return 0;
}

commandRegistry* initialize(){

  commandRegistry *registry;
  registry = malloc(sizeof(commandRegistry));

  command *chelp;
  chelp = malloc(sizeof(command));
  chelp->ptr = help;
  chelp->commandName = "help";
  chelp->commandDesc = "prints out information about all the commands";
  addToRegistry(registry, chelp);

  command *cabout;
  cabout = malloc(sizeof(command));
  cabout->ptr = about;
  cabout->commandName = "about";
  cabout->commandDesc = "shows information about the current program";
  addToRegistry(registry, cabout);

  return registry;
}

