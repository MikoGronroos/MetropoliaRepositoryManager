typedef struct arguments{
  char** args;
  int length;
}arguments;

arguments* parse_args(char* input);
