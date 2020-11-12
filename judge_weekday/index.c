#include <stdio.h>

void judge_weekday(char weekday);

int main()
{
  char w;
  printf("请输入第一个字母:");
  scanf("%c", &w);
  judge_weekday(w);
  return 0;
}


void judge_weekday(char weekday)
{
  switch(weekday)
  {
    case 'm':
      printf("Monday\n");break;
    case 'w':
      printf("Wednesday\n");break;
    case 'f':
      printf("Friday\n");break;
    case 't':
      printf("请输入下一个字母:");
      char scd;
      getchar(); 
      scanf("%c", &scd);
      if(scd == 'u')
      {
        printf("Tuesday\n");break;
      }else if (scd == 'h'){
        printf("Thursday\n");break; 
      }else{
        printf("error\n");break;
      }
    case 's':
      printf("请输入下一个字母:");
      getchar(); 
      scanf("%c", &scd);
      if(scd == 'a')
      {
        printf("Saturday\n");break;
      }else if( scd == 'u' ){
        printf("Sunday\n");break;
      }else{
        printf("error\n");
      }
    default:
      printf("error\n");break;
  } 
}
