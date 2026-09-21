typedef struct command{

  char* commandName;
  char* commandDesc;
  int (*ptr)();

} command;

int initialize();

int execute(char* input);
