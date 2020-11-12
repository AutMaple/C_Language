#include <stdio.h>

int recursive_factorial(int n);

int main()
{
  int n;
  int result;
  scanf("%d", &n);
  result = recursive_factorial(n);
  printf("%d! = %d\n", n, result);
  return 0;
}

int recursive_factorial(int n)
{
  if(n == 0 || n == 1){
    return 1;
  }
  return n * recursive_factorial(n - 1);
}
