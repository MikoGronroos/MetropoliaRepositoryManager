#include <stdio.h>
#include "commands.h"
#include <stdlib.h>

int help(){
  
  printf("Here is a list of all the commands available\n");
  
}

int about(){
  
  printf("Mitten is a tool for managing repositories.\n");
  
}


int initialize(){

  command *chelp;
  chelp = malloc(sizeof(command));
  chelp->ptr = help;
  chelp->commandName = "help";
  chelp->commandDesc = "prints out information about all the commands";

  command *cabout;
  cabout = malloc(sizeof(command));
  cabout->ptr = about;
  cabout->commandName = "about";
  cabout->commandDesc = "shows information about the current program";

}

int execute(char* input){

  printf("%s\n", input); 
  return 0;
}

