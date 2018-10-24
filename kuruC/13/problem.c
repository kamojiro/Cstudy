#include <stdio.h>

int array[10];
int i;
int main(void)
{
  for (i = 1; i <= 10; ++i) {
    printf("%d番目の数字を入力してください\n",i);
  scanf("%d", &array[i]);
  }
  for (i = 10; i > 0; --i) {
    printf("%d番目に入力された数字は%d\n", i, array[i]);
  }

  return 0;
}
