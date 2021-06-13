#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "main.h"

// String block util program init
int main(int argc, char *argv[]) {
  switch (argc) {
    case 2:;
      #define ARG_COUNT 3
      #define ARG_TYPES 3
      char *args[ARG_COUNT][ARG_TYPES] = {
        {
          "-h",
          "--help",
        },
        {
          "-f",
          "--find-blocks",
        },
        {
          "-s",
          "--select-block",
        }
      };

      int i;
      void (*arg_funcs[3])() = {help, find_blocks, select_blocks};
      for (i=0; i < ARG_COUNT; i++)
      {
        if (!strcmp( argv[1], args[i][0] ) || !strcmp( argv[1], args[i][1] ))
        {
          (*arg_funcs[i])();
        } 
      }
      
      break;
    default:;
      info();
      break;
  }
}

