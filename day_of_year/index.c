#include <stdio.h>

int day_of_year(int year, int month, int day);

int main()
{
  int day, month, year, sum;
  printf("请输入年、月、日，格式为: 年，月，日(2016,07,07)\n");
  scanf("%d,%d,%d", &year, &month, &day);
  sum = day_of_year(year, month, day);
  printf("这是这一年的第%d天。\n", sum);
  return 0;
}

int day_of_year(int year, int month, int day)
{
  int sum;
  switch(month){
    case 1:
      sum = 0;break;
    case 2:
      sum = 31;break;
    case 3:
      sum = 59;break;
    case 4:
      sum = 90;break;
    case 5:
      sum = 120;break;
    case 6:
      sum = 151;break;
    case 7:
      sum = 181;break;
    case 8:
      sum = 212;break;
    case 9:
      sum = 243;break;
    case 10:
      sum = 273;break;
    case 11:
      sum = 304;break;
    case 12:
      sum = 334;break;
  }
  sum = sum + day;
  // 如果当前年份是闰年并且月份大于二月份，那么总的天数再加一
  if(((year % 4 == 0 && year % 100 == 0) || year % 400 == 0) && month > 2){
    sum++;
  }
  return sum;
}

