#include <stdio.h>
#include "commands.h"
#include <stdlib.h>

/*
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
}*/

