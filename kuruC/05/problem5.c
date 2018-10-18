#include <stdio.h>
int main(void)
{
  int a = 198, b = 138;
  printf("%d\n", 1000 - (int)(1.05*(a+b*2)));
  return 0;
}
