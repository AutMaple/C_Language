#include <stdio.h>

int fibo_recur(int n){
  if(n == 1 || n == 2){
    return 1;
  }
  return fibo_recur(n -1) + fibo_recur( n - 2 );
}

int fibo_loop(int n){
  if (n == 1 || n == 2){
    return 1;
  }
  int a = 1;
  int b = 1;
  int sum = 0;
  for(int i = 3; i <= n; i++){
    sum = a + b;
    a = b;
    b = sum;
  }
  return sum;
}

int main(){
  int n;
  int result;
  scanf("%d", &n);
  printf("递归算法求的前10项为:");
  for(int i = 1; i <=n; i++){
    result = fibo_recur(i);
    printf("%3d", result);
  }
  printf("\n循环算法求的前10项为:");
  for(int i = 1; i <= n; i++){
    result = fibo_loop(i);
    printf("%3d", result);
  }
  printf("\n");
  return 0;
}
