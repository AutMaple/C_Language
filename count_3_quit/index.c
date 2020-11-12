#include <stdio.h>

int main()
{
  int num;
  printf("请输入参与的人数：");
  scanf("%d", &num);
  int people[100] = { 0 };
  int index = 0;
  int count = 0;
  int tmp = num;
  while (num > 1)
  {
    if(!people[index])
    {
      count++;
      if(count == 3)
      {
        count = 0;
        people[index] = 1;
        num--;
      }
    }
    index = (index + 1) % tmp;
  }
  for(int i = 0; i < tmp; i++)
  {
    if(!people[i])
    {
      printf("现在剩下的人是：%d号\n", i+1);
    }
  }
  return 0;
}
