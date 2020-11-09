#include <stdio.h>
/*
 *使用的思想是冒泡排序法
 每一次比较选出一个最大的数
 */
int main()
{
  int x, y, z;
  printf("请输入三个数:");
  scanf("%d%d%d", &x, &y, &z);
  if(x > y)
  {
    int tmp = x;
    x = y;
    y = tmp;
  }
  if(y > z)
  {
    int tmp = y;
    y = z;
    z = tmp;
  }
  if(x > y)
  {
    int tmp = x;
    x = y;
    y = tmp;
  }
  printf("从小到大排序：%d %d %d\n", x, y, z);
  return 0;
}
