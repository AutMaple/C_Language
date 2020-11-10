#include <stdio.h>

int main()
{
  int num_peach = 1;
  for(int i = 1; i < 10; i++){
    num_peach = (num_peach + 1) * 2;
  }
  printf("总数为 %d\n",num_peach);
  return 0;
}
