#include<stdio.h>

int main()
{
  int x ;
  int p ;
  int n ;
  scanf("%d %d %d", &x, &p, &n);
  n = 32;
  printf("%d\n", n);
  printf("%d\n", (1 << 32) - 1);
  printf("%d\n", (( 1 << n ) - 1)); 
  printf("%d\n", x ^ (((1 << n) -1) << (p-n+1)));
  return 0;
}
