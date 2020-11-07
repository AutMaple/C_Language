#include <stdio.h>

int main()
{
  for(int i = 10000; i < 100000; i++){
    int a = i / 10000;
    int b = (i / 1000) % 10;
    int c = (i / 100) % 10; 
    int d = (i / 10) % 10;
    int e = i % 10;
    int sum = i * a;
    int D = sum % 10;
    if(D != a &&
       D != b &&
       D != c &&
       sum >= 100000 &&
       d == a &&
       e == b &&
       D == (sum / 10) % 10 &&
       D == (sum / 100) % 10 &&
       D == (sum / 1000) % 10 &&
       (sum / 10000) % 10 ==D &&
       D == sum / 100000){
          printf("%d*%d=%d\n", i, a, sum);
    }
  }
  return 0;
}
