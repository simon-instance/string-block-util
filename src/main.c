#include <string.h>

#include "main.h"

// String block util program
int main(int argc, char* argv[]) {
  if (argc == 1) 
  {
    info();
  }

  if (argc == 2) 
  {
    if (strcmp( argv[1], "-h" ) == 0)
    {
      help();
    }
  }
}

