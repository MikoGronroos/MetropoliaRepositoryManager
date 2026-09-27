typedef struct command{

  char* commandName;
  int (*ptr)(char **args, int length);

} command;

int about(char **args, int length);
int help(char **args, int length);
int add(char **args, int length);
int quit(char **args, int length);
int list(char **args, int length);
int del(char **args, int length);
