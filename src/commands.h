typedef struct commandmeta{
  
  char* commandName;
  char* commandDesc;

} commandmeta;

typedef struct command{

  char* commandName;
  int (*ptr)();

} command;

int initialize();
