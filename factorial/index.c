#include <stdio.h>

int main()
{
  long double mix = 1;
  long double sum = 0;
  for(int i  = 1; i <=20; i++){
    mix = mix * i;
    sum = sum + mix;
  }
  printf("%LF\n",sum);  
  return 0;
}
