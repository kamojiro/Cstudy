#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
  char name[60];/* 名前 */
  int year;/* 年齢 */
  char sex[6];/* 性別 */
    } People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void)
{
  int i,count, datasize;
  People *data;

  datasize = 10;

  data = (People*)malloc(sizeof(People)*datasize);

  count = 0;

  while(1){
    InputPeople(&data[count]);
    if (data[count].year == -1) break;
    count++;
    if (count >= datasize) {
      datasize += 10;
      data = (People*)realloc(data, sizeof(People)*datasize);
    }

  }
  for (i = 0; i < count; ++i) {
    ShowPeople(data[i]);
  }
  free(data);
  return 0;
}

void InputPeople(People *data){
  printf("名前：");
  scanf("%s", data->name);/* dataはポインタ変数 */
  printf("年齢：");
  scanf("%d", &data->year);/* dataの2つ目以降の要素はポインタ変数ではないので&を用いて指定する必要がある */
  printf("性別：");
  scanf("%s", &data->sex);
}

void ShowPeople(People data){
  printf("名前：%s ", data.name);
  printf("年齢：%d ", data.year);
  printf("性別：%s\n", data.sex);
}
