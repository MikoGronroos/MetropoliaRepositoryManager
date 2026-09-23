#include <stdio.h>
#include "execute.h"

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  char input[256];
  int running = 1;
  while(running == 1){
    if(scanf("%255s", input) == 1){
      int status = execute(input);
      if(status == 2){
        running = 0;
      }
    }
    while(getchar() != '\n');
  }
  return 0;
}
