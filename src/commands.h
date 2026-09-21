typedef struct command{

  char* commandName;
  char* commandDesc;
  int (*ptr)();

} command;

typedef struct commandRegistry{

  command** commands;
  int length;

} commandRegistry;

commandRegistry* initialize();

int addToRegistry(commandRegistry *reg, command* com);
