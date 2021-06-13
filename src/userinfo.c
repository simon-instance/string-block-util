#include <stdio.h>

void info() {
  printf("\nString block util. Type sbu -h for more information.\n");
}

void help() {
  printf("\nUsage:\n  sbu [FILENAME] [options]\n\nOptions:\n  -s\t--select-block\t  select block by number\n  -l\t--list-blocks\t  list all blocks by number\n\nString block util (sbu) is a cli for people who want to find a string inside a block of code or text.\nThis tool was made because it's not yet possible to accomplish this with regex.\n\nFor example: use sbu /path/to/testfile.json --find-blocks in order to find the amount of stings there are in a file.\nThen you need to select the block you want to search through: sbu /path/to/testfile.json --select-block 3.\n");
}

void find_blocks() {
  printf("find_blocks test");
}

void select_blocks() {
  printf("select_blocks test");
}

