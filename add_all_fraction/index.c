#include <stdio.h>

int main()
{
  float sum = 0.0;
  float a = 2, b = 1;
  for(int i = 0; i < 20; i++){
    sum = sum + a / b;
    int tmp = a;
    a = a + b;
    b = tmp;
  }
  printf("%9.6f\n",sum);  
  return 0;
}
