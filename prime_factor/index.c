#include <stdio.h>


void prime_factor(int n)
{
  for(int i = 2; i <= n; i++){
    while(n % i == 0){
      printf("%d ",i);
      n = n / i;
      if( n != 1 ){
        printf("* ");
      }
    }
  }

}


int main()
{
  int n;
  while(1)
  {
    printf("请输入一个整数:");
    scanf("%d", &n);
    printf("%d = ", n);
    prime_factor(n);
    printf("\n");
  }
  return 0;
}
