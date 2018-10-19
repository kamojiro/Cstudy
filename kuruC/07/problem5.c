#include <stdio.h>
int main(void)
{
  int year, y;
  scanf("%d", &year);
  y = year % 4;
  if (y == 0) {
    printf("夏季五輪\n");
  }
  if (y==2) {
    printf("冬季五輪\n");
  }
  if (y==1 || y == 3) {
    printf("五輪は開催されない\n");
  }
  return 0;
}
