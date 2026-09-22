#include <stdio.h>
#include "execute.h"

int main(){
  printf("Welcome to mitten\n");
  printf("Type 'help' for list of all available commands\n");
  char input[256];
  while(true){
    if(scanf("%255s", input) == 1){
      if(execute(input) == 0){
        
      }else{
        printf("The command you entered was faulty\n");
      }
    }
    while(getchar() != '\n');
  }
  return 0;
}
