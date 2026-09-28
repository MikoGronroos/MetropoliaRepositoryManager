#include <stdio.h>
#include <string.h>
#include "execute.h"
#include <stdlib.h>
#include "args.h"

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  char input[128];
  int running = 1;

  while(running == 1){
    fflush(stdout);
    fgets(input, sizeof(input), stdin);
    if(strlen(input) != 0){  
      arguments* args = parse_args(input);
      int status = execute(args->args, args->length);
      if(status == 2){
        running = 0;
      }
    }
  }
  return 0;
}
