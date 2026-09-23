typedef struct command{

  char* commandName;
  int (*ptr)(void);

} command;

int about();
int help();
int add();
int quit();
