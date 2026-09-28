#include "commands.h"
#include <stdio.h>

int help(char **args, int length){
  if(length > 1){
    printf("Invalid amount of arguments\n");
    return 0;
  }  
  printf("Here is a list of all the commands.\n");
  printf("add\n");
  printf("show\n");
  printf("list\n");
  printf("quit\n");
  printf("delete\n");
  printf("help\n");
  printf("about\n");
  return 0;
}
