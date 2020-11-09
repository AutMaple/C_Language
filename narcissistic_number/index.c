#include <stdio.h>

int main()
{
  for(int i = 100; i < 1000; i++){
    int x = i % 10;
    int y = (i / 10) % 10;
    int z = (i / 100);
    int sum = x * x * x + y * y * y + z * z * z;
    if(sum == i){
      printf("%d\n", sum);
    }
  }
  return 0;
}
