#include <stdio.h>

int main(void)
{
  int *p, i;
  p = &i;
  /* qでポインタのさす変数を指定する */
  *p = 10;
  printf("*p= %d\n", *p);
  printf("i= %d\n", i);
  return 0;
}

