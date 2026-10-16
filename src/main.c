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
   //Main loop of the program 
   while(running == 1){
      printf("-> ");
      if(fgets(input, sizeof(input), stdin) != NULL){
         if(strlen(input) != 0){
            //Parse arguments to struct and pass the values to wait for execution
            arguments* args = parse_args(input);
            int status = execute(args->args, args->length);
            if(status == 2){
               running = 0;
            }
            free_args(args);
         }
      }else {
         fprintf(stderr, "An error occurred or EOF was reached.\n");
      }
   }
   return 0;
}
