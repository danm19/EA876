
#include <stdlib.h>
#include <stdio.h>

int main() {
  char *c;
  char *d;

  c = (char*) malloc (sizeof(char));
  d = (char*) malloc (sizeof(char));

  printf("c=%p\nd=%p\n", c, d);

  for (char *e = c; e < d; e ++) {
    printf("%c", *e);
  }

  printf("\n");
  return 0;

}
