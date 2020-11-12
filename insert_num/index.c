#include<stdio.h>

void print_array(int* array, int length);
void insert_num(int* array , int num, int length);

int main()
{
  int nums[11] = {1, 4, 6, 9, 13, 16, 19, 28, 40, 100};
  int new_num;
  printf("请输入要插入的数据：");
  scanf("%d", &new_num);
  printf("插入数据之前的数组：\n");
  print_array(nums, 10);
  printf("插入数据之后的数组: \n");
  insert_num(nums, new_num, 10);
  print_array(nums, 11);
  return 0;
}

void print_array(int* array, int length)
{
  for(int i = 0; i < length; i++)
  {
    printf("%-4d", array[i]);
  }
  printf("\n");
}

void insert_num(int* array, int num,  int length)
{
  if(num >= array[length-1])
  {
    array[length] = num;
  }
  else
  {
    for(int i = 0; i < length; i++)
    {
      if(array[i] > num)
      {
        for(int j = length; j > i; j--)
        {
          array[j] = array[j-1];
        }
        array[i] = num;
        break; // 插入完数据，就直接退出循环，因为后面的数都是大于num的数
      }
    }
  }
}
