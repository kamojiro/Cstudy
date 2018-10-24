#include <stdio.h>
int main(void)
{
  int i1, i2, i3;
  printf("%p\n", &i1);
  printf("%p\n", &i2);
  printf("%p\n", &i3);

  int array[10];
  printf("array__(%p)\n", array);
  printf("array[0](%p)\n", &array[0]);
  printf("array[1](%p)\n", &array[1]);
  printf("array[2](%p)\n", &array[2]);

  char str[10];
  scanf("%s", &str[0]);
  printf("%s\n", str);
  return 0;
}

