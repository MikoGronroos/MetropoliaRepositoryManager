typedef struct arguments{
  char** args;
  int length;
}arguments;

int free_args(arguments* args);

arguments* parse_args(char* input);
