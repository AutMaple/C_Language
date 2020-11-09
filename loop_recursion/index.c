#include <stdio.h>

float fac_recursion(int n);
float fac_loop(int n);


int main()
{
  int n;
  float result;
  scanf("%d", &n);
  result = fac_recursion(n);
  printf("递归算法求得%d! = %.0f \n", n, result);
  result = fac_loop(n);
  printf("循环算法求得%d! = %.0f \n", n, result);
  return 0; 
}


float fac_recursion(int n){
  if(n == 1){
    return 1.0;
  }
  return fac_recursion(n-1) * n;
}

float fac_loop(int n){
  float sum = 1; 
  for(int i = 1; i <= n; i++){
    sum = sum * i;
  }
  return sum;
}
