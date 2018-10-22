#include <stdio.h>

int count;/* global変数 */

int countfunc(void);

int main(void)
{
  int count;/* 同盟で宣言する */
  countfunc();
  count = 10;
  countfunc();
  countfunc();
  printf("main:count=%d\n", count);
  return 0;
}

int countfunc(void)
{
  count++;
  printf("%d\n", count);
  return count;    
}

