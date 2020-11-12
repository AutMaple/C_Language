#include <stdio.h>

void print_str_reverse_recursive(char* str, int length);

int main()
{
  char str[100];
  printf("请输入五个字符: ");
  scanf("%s", str);
  int length = 5;
  print_str_reverse_recursive(str, length);
  printf("\n");
  return 0; 
}

void print_str_reverse_recursive(char* str, int length)
{
  if(length>0)
  {
    printf("%c", str[length-1]);
    return print_str_reverse_recursive(str, length - 1);
  }
}
