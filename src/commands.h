typedef struct command{

  char* commandName;
  int (*ptr)(char **args);

} command;

int about(char **args);
int help(char **args);
int add(char **args);
int quit(char **args);
