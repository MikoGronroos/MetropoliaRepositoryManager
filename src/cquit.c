#include <stdio.h>

int quit(char **args, int length){
  if(length > 1){
    printf("Invalid amount of arguments\n");
    return 0;
  }  
  return 2;
}
