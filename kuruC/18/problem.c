#include <stdio.h>

int when(int);

enum{
  OL_NON,
  OL_SUM,
  OL_WIN,
};

int main(void)
{
  int year;
  scanf("%d", &year);
  switch(when(year)){
  case OL_SUM:
    printf("夏季オリンピック\n");
    break;
  case OL_WIN:
    printf("冬季オリンピック\n");
    break;
  case OL_NON:
    printf("オリンピックは開催されていない\n");
    break;
  }
  return 0;
}

int when(int y)
{
  if (y%4 == 0) {
    return OL_SUM;
  }else if (y%2 == 0){
    return OL_WIN;
  }else {
    return OL_NON;
  }
}
