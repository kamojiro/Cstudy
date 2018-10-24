#include <stdio.h>

char myoji[10], namae[10], all[20];

int main(void)
{
  printf("名字を入力してください\n");
  scanf("%9s", myoji);
  printf("名前を入力してください\n");
  scanf("%9s", namae);
  sprintf(all, "%s%s", myoji, namae);
  printf("%s\n", all);
  return 0;
}

