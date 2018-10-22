#include <stdio.h>
int main(void)
{
  int s;
  do
  {
    printf("score? : ");
    scanf("%d", &s);
    } while (s < 0 || s > 100);
  printf("入力された点数:%d\n", s);
  return 0;
}
