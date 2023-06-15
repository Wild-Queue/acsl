#include <iostream>
#include <fstream>

#include "acsl/Absyn.H"
#include "acsl/Printer.H"
#include "acsl/Absyn.H"
#include "acsl/Parser.H"
#include "acsl/ParserError.H"
#include "acsl/Printer.H"

void usage()
{
  printf("usage: Call with one of the following argument combinations:\n");
  printf("\t(no arguments)\tTypecheck stdin.\n");
  printf("\tPROGRAM\t\tParse content of file as acsl program, then call main with input parsed from stdin.\n");
}

enum MODE
{
  TYPECHECK
};

int main(int argc, char **argv)
{
  FILE *input;
  int quiet = 0;
  char *filename = NULL;

  MODE mode = TYPECHECK;

  if (argc > 1)
  {
    if (strcmp(argv[1], "typecheck") == 0)
    {
      if (argc > 2)
      {
        filename = argv[2];
      }
      else
      {
        usage();
        exit(1);
      }
    }
    else
    {
      std::cout << "Please, specify the mode (typecheck or test)" << std::endl;
      exit(1);
    }
  }

  if (filename)
  {
    input = fopen(filename, "r");
    if (!input)
    {
      printf("cannot read file: %s\n", filename);
      exit(1);
    }
  }
  else
  {
    input = stdin;
  }

  acsl::Program *prog = nullptr;
  try
  {
    prog = acsl::pProgram(input);
    std::cout << "parsing succeeded!\n";
    if (prog)
    {
      std::cout << "prog is not null\n";
    }
  }
  catch (acsl::parse_error &ex)
  {
    std::cerr << "Parse error on line " << ex.getLine() << "\n";
  }
  if (filename)
    fclose(input);


  return 0;
}
