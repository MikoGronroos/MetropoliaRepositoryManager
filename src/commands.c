#include <stdio.h>
#include "commands.h"
#include <stdlib.h>

int help(){
  
  printf("Here is a list of all the commands available\n");
  
}

int initialize(){

  command *chelp;
  chelp = malloc(sizeof(command));
  chelp->ptr = help;
  chelp->ptr();
}



