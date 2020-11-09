#include <stdio.h>

int common_divisor(int a, int b);


int main()
{
  int a; 
  int b;
  int c;
  scanf("%d %d %d", &a, &b, &c);
  int tmp1 = common_divisor(a, b);
  int min_multiple1 = a * b / tmp1;
  int tmp2 = common_divisor(min_multiple1, c);
  int result = min_multiple1 * c / tmp2;
  printf("%d, %d, %d 的最小公倍数是: %d\n", a, b, c, result);
  return 0;
}


// 辗转相除法求最大公约数
int common_divisor(int a, int b)
{
  int tmp;
  do
  {
    if(a < b){
      tmp = b;
      b = a;
      a = tmp;
    }
    tmp = b;
    b = a % b;
    a = tmp;
  }while(b);

  return tmp;
}

