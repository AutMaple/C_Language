#include <stdio.h>

int num_digit(int n);
void print_reverse(int n);


int main()
{
  int n;
  printf("请输入一个整数：");
  scanf("%d", &n);
  int num = num_digit(n);
  print_reverse(n);
  return 0;
}


int num_digit(int n)
{
  int count = 0;
  while(n){
    n = n / 10;
    count++;
  }
  return count;
}


void print_reverse(int n)
{
  int nums[100];
  int count = 0;
  while(n){
    nums[count] = n % 10;
    n = n / 10;
    count++;
  }
  for(int i = 0; i < count; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");
}
