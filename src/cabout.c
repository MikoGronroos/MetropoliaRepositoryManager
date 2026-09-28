#include "commands.h"
#include <stdio.h>

int about(char **args, int length){
  if(length > 1){
    printf("Invalid amount of arguments\n");
    return 0;
  } 
  printf("Mitten is a tool for managing repositories\n");
  printf("Project for metropolia c course in Smart Iot Embedded\n");
  printf("Made by Miko Grönroos\n");
  return 0;
}
