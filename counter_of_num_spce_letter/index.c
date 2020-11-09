#include <stdio.h>

#define max 1000

typedef struct counter{
  int letter;
  int number;
  int space;
  int others;
} counter, *p_counter;

int statistical(char str[], p_counter count);


int main()
{
  char string[1000];
  counter count;
  printf("请输入一串字符串：\n");
  scanf("%[^\n]s", string);
  statistical(string, &count);
  printf("\n----------------------\n");
  printf("字母的数量是：%d\n", count.letter);
  printf("数字的数量是：%d\n", count.number);
  printf("空格的数量是: %d\n", count.space);
  printf("其他字符的数量：%d\n", count.others);
  return 0;
}


int statistical(char str[], p_counter count)
{
  count->letter = 0;
  count->number = 0;
  count->space = 0;
  count->others = 0;
  int i = 0;
  while(str[i] != '\0')
  {
    if((str[i]>= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
      count->letter++;
    }else if(str[i] == 32)
    {
      count->space++;
    }else if(str[i] >= '0' && str[i] <= '9')
    {
      count->number++; 
    }else{
      count->others++;
    }
    i++;
  }
  return 1;
}
