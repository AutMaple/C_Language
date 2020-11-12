#include <stdio.h>

int main()
{
  int N[3][3];
  printf("请输入3*3的矩阵:\n");
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      scanf("%d", &N[i][j]);
    }
  }
  int sum = 0;
  for(int i = 0; i <3; i++)
  {
    sum = sum + N[i][i];
  }
  printf("对角线之和是：%d\n",sum);
  return 0;
}
