#include <stdio.h>
int main(void)
{
  int teika, one, three, five, eight;
  scanf("%d", &teika);
  one = (int)(teika*0.9);
  three = (int)(teika*0.7);
  five = (int)(teika*0.5);
  eight = (int)(teika*0.2);
  printf("%d, %d, %d, %d\n", one, three, five, eight);
  return 0;
}
