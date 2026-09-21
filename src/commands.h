typedef struct command{

  char* commandName;
  char* commandDesc;
  int (*ptr)();

} command;

typedef struct commandRegistry{

  command** commands;
  int length;

} commandRegistry;

int initialize();

int execute(char* input);

int addToRegistry(commandRegistry *reg, command* com);
