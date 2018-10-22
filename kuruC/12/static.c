#include <stdio.h>

int countfunc(void);

int main(void)
{
  countfunc();
  countfunc();
  countfunc();  
  return 0;
}

/* 現在のバージョンだとローカル変数は静的なもので設定されてる？？？ */
int countfunc(void)
{
  static int count=0;/* 静的ローカル変数 */
  count++;
  printf("%d\n", count);
  return count;    
}
