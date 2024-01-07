#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <common.h>

#include "malloc-2.6.1.c"

#define SIZE 1024

char *write_here = "wrong!";
char passwd[1024] = "jacket!";

int main(int argc, char** argv) {
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);
  
  char *p = malloc(SIZE);
  char *q = malloc(SIZE);

  read(0, p, SIZE * 2);
  free(p);
  
  if (!strcmp(write_here, passwd))
    read_flag();
}
