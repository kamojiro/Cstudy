#include <stdio.h>

int when(int);

int main(void)
{
  int year;
  scanf("%d", &year);
  switch(when(year)){
  case 0:
    printf("夏季オリンピック\n");
    break;
  case 1:
    printf("冬季オリンピック\n");
    break;
  case 2:
    printf("オリンピックは開催されていない\n");
    break;
  }
  return 0;
}

int when(int y)
{
  if (y%4 == 0) {
    return 0;
  }else if (y%2 == 0){
    return 1;
  }else {
    return 2;
  }
}
