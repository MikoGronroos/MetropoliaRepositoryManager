#include <stdio.h>
#include "commands.h"
#include <stdlib.h>

int help(){
  
  printf("Here is a list of all the commands available\n");
  
}

int about(){
  
  printf("Mitten is a tool to keep manage repositories.\n");
  
}


int initialize(){

  command *chelp;
  chelp = malloc(sizeof(command));
  chelp->ptr = help;

  command *cabout;
  cabout = malloc(sizeof(command));
  cabout->ptr = about;
  cabout->ptr();

}



