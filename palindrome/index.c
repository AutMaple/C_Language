#include <stdio.h>

int palindrome(int n);

int main()
{
  int n;
  printf("请输入一个整数：");
  scanf("%d", &n);
  int flag = palindrome(n);
  if(flag)
  {
    printf("%d是一个回文数!\n", n);
  }else{
    printf("%d不是回文数!\n", n);
  }
  return 0;
}

int palindrome(int n)
{
  int flag = 0;
  int sum = 0;
  int tmp = n;
  while(n)
  {
    sum = sum * 10 + n % 10;
    n = n / 10;
  }
  if(tmp == sum)
  {
    flag = 1;
  }
  return flag;
}
