#include <stdio.h>

#define MAX 100

void print_array(int* array, int length);
void circle_move(int* array, int length, int m);

int main()
{
  int nums[MAX];
  int length;
  int m;
  printf("请输入你需要输入数字的个数：");
  scanf("%d", &length);
  printf("请输入对应的数字：\n");
  for(int i = 0; i < length; i++)
  {
      scanf("%d", &nums[i]);
  }
  printf("请输入循环移位的次数: ");
  scanf("%d", &m);
  circle_move(nums, length, m);
  print_array(nums, length);
  return 0;
}


void print_array(int* array, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void circle_move(int* array, int length, int m)
{
    for(int i = 1; i <= m; i++)
    {
        int tmp = array[length-1];
        for(int j = length-2; j >= 0; j--)
        {
            array[j+1] = array[j];             
        }
        array[0] = tmp;
    }
}