#include "commands.h"
#include <stdio.h>

int help(char **args){
  printf("Here is a list of all the commands.\n\n");
  printf("add\n");
  printf("show\n");
  printf("list\n");
  printf("quit\n");
  printf("delete\n");
  printf("help\n");
  printf("about\n");
  return 0;
}
