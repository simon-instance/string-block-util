#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "main.h"

typedef void (*funcs)(void);

// String block util program init
int main(int argc, char *argv[]) {
  switch (argc) {
    case 2:;
      help();
      break;
    case 3:;
      #define ARG_COUNT 3
      #define ARG_TYPES 2
      const char *args[ARG_COUNT][ARG_TYPES] = {
        {
          "-l",
          "--list-blocks",
        },
        {
          "-s",
          "--select-block",
        }
      };

      int i;
      funcs arg_funcs[3] = {&help, &find_blocks, &select_blocks};
      for (i=0; i < ARG_COUNT; i++)
      {
        // Each element in the args array has 2 keys, 0 and 1
        if (!strcmp( argv[1], args[i][0] ) || !strcmp( argv[1], args[i][1] ))
        {
          arg_funcs[i]();
        } 
      }
      break;
    default:;
      info();
      break;
  }
}

