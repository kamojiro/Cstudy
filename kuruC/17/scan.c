#include <stdio.h>

int main(void)
{
  FILE *file;
  int i;
  file = fopen("hello.txt", "r");
  fscanf(file, "%d", &i);
  fclose(file);
  printf("%d\n", i);
  return 0;
}
