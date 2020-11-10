#include <stdio.h>

int print_up(int n);
int print_down(int n);


int main()
{
  int n;
  printf("请输入菱形的大小: ");
  scanf("%d", &n);
  print_up(n-1);
  for(int i = 0; i < 2*n-1; i++){
    printf("*");
  }
  printf("\n");
  print_down(n-1);
  return 0;
}

int print_up(int n)
{
  for(int i=0; i < n; i++){
    for(int j = n-1-i; j >= 0; j--){
      printf(" ");
    }
    for(int j = 0; j < 2*i+1; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

int print_down(int n)
{
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      printf(" ");
    }
    for(int j = 0; j < (2 * (n-i) - 1); j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
