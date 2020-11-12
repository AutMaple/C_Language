#include <stdio.h>

#define exchange(a, b) {int tmp; tmp = a; a = b; b=tmp;}

int main()
{
  int x = 10;
  int y = 20;
  exchange(x, y);
  printf("x = %d, y = %d \n", x , y);
  return 0;
}
