#include <stdio.h>


#define MAX 100

int str_length(char* str);

int main()
{
  char str[MAX];
  int length;
  printf("请输入字符串：");
  scanf("%[^\n]s", str);
  length = str_length(str);
  printf("你输入的字符串的长度是: %d\n", length);
  return 0;
}


int str_length(char* str)
{
  int len = 0;
  while(*str != '\0')
  {
    str = str + 1;
    len++;
  }
  return len;
}
