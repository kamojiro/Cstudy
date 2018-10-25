#include <stdio.h>

int main(void)
{
  FILE *file;
  int i=100;
  file = fopen("hello.txt", "w");
  fprintf(file, "%d", i);
  fclose(file);
  return 0;
}
