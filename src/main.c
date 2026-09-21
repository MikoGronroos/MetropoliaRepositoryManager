#include <stdio.h>
#include "commands.h"

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  initialize();

  while(true){
    char input[256];
    scanf("%255s", input);
  }
  return 0;
}
