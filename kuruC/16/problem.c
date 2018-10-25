#include <stdio.h>
typedef struct{
  char name[60];/* 名前 */
  int year;/* 年齢 */
  char sex[6];/* 性別 */
    } student;

int main(void)
{
  student data[3];
  int i;
  for (i = 0; i < 3; ++i) {
    printf("%d人目の名前、年齢、性別を入力してください\n", i+1);
    scanf("%s", &data[i].name);
    scanf("%d", &data[i].year);
    scanf("%s", &data[i].sex);
  }
  for (i = 0; i < 3; ++i) {
    printf("名前は%sであり、%d歳で、%sです\n", data[i].name, data[i].year, data[i].sex);
  }

  return 0;
}
