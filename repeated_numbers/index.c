#include <stdio.h>

int calc(int x, int n);

int main()
{
  int x, n, result;
  printf("请输入x 和 n: ");
  scanf("%d%d", &x, &n);
  result = calc(x, n);
  printf("= %d\n", result);
  return 0;
}


int calc(int x, int n)
{
  int sum = 0;
  int tmp = x;
  for(int i = 1; i <= n; i++)
  {
    printf("%d ", x);
    if(i != n){
      printf("+ ");
    }
    sum = sum + x;
    x = x * 10 + tmp;
  }
  return sum;
}
