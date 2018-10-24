#include <stdio.h>

void maxmin(int array[], int *min, int *max);

int main(void)
{
  int min, max, i=0;
  int array[10];
  do
  {
    scanf("%d", &array[i]);
    i++;
  } while (array[i-1] != -1);
  
  maxmin(array, &min, &max);
  printf("最大値%d, 最小値%d\n", max, min);
  return 0;
}

void maxmin(int array[], int *min, int *max)
{
  int i;
  *max = 0;
  *min = 1000;
  for (i = 0; i < 10; ++i) {
    if (array[i] == -1) {
      break;
    }
    if (array[i] < *min) {
      *min = array[i];
    }
    if (array[i] > *max) {
      *max = array[i];
    }
  }
  return;
}
