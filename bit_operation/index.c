#include <stdio.h>

/*
 * 该算法实现有符号数右循环移位运算
 */

int bit_operation(int x, int n);

int main()
{
  int x, n;
  scanf("%d", &x);
  scanf("%d", &n);
  int res = bit_operation(x, n);
  printf("%d\n", res);
  return 0;
}

int bit_operation(int x, int n)
{
  // 最后的(（1<<(32-n)）-1)是因为计算机中存储整数存储的是二进制补码
  // 负数右移补1，因此与该表达式相与的目的是为了消除前面的多出来的1
  int result = ( x << ( 32 - n ) ) | ( (x >> n) & ( ( 1 << (32 - n) ) - 1 ) );
  return result;
}
