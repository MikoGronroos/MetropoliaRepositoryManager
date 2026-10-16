#include <stdio.h>
#include <string.h>
#include "commands.h"

#define amountOfCommands 7

int execute(char** args, int length){
   //Array of function pointers and which command they are mapped to. The function pointers point to other files as all commands are in individual files.
   //The function pointers are found in commands.
   command cmds[amountOfCommands] = {
      {"help", help},
      {"about", about},
      {"add", add},
      {"quit", quit},
      {"list", list},
      {"delete", del},
      {"show", show}
   };
   //Find the right function pointer to execute
   int returnStatus = -1;
   for(int i = 0; i < amountOfCommands; i++){
      if(strcmp(args[0], cmds[i].commandName) == 0){
         returnStatus = cmds[i].ptr(args, length);
      }
   }
   if(returnStatus == -1){
      fprintf(stderr, "The command you entered was faulty\n");
   }
   return returnStatus;
}
