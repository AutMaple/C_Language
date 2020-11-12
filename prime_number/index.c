#include <stdio.h>

int is_prime_number(int x);


int main()
{
  int count = 0;
  for(int i = 101; i <=200; i++){
    int flag = is_prime_number(i);  
    if(flag){
      printf("%5d", i);
      count++;
      if(count % 4 == 0){
        printf("\n");
      }
    }
  }
  printf("\n");
  return 0;
}


int is_prime_number(int n)
{
  int flag = 1;
  for(int i = 2; i <= n / 2; i++){
    if( n % i == 0)
    {
      flag = 0;
      break;
    }
  }
  return flag;
}


