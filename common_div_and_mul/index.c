#include <stdio.h>

int common_div(int x, int y);
int common_mul(int x, int y);

int main(){
  int x, y;
  printf("请输入x和y的值:");
  scanf("%d%d", &x, &y);
  printf("最大公约数是：%d\n", common_div(x, y));
  printf("最小公倍数是：%d\n", common_mul(x, y));
  return 0;
}


int common_div(int x, int y)
{
  int tmp;
  do{
    if ( x < y ){
      tmp = x;
      x = y;
      y = tmp;
    }
     tmp = y;
     y = x % y;
     x = tmp;
  }while(y);
  
  return tmp;
}


int common_mul(int x, int y)
{
  return (x * y) / common_div(x, y);
}

