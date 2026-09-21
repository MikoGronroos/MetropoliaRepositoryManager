#include <stdio.h>
#include "commands.h"

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  initialize();
  char input[256];
  while(true){
    if(scanf("%255s", input) == 1){
      execute(input);
    }
    while(getchar() != '\n');
  }
  return 0;
}
