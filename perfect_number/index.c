#include <stdio.h>

int is_perfect_number(int n, int factor[], int* index);
void print_result(int num, int factor[], int index);

int main()
{
  for(int i = 2; i <= 1000; i++)
  {
    int factors[100] = { 0 };
    int index;
    int flag = is_perfect_number(i, factors, &index);
    if(flag){
      print_result(i, factors, index);
    }
  }
  return 0;
}


int is_perfect_number(int n, int factor[], int* index)
{
  int flag = 0;
  factor[0] = 1;
  *index = 1;
  int sum = 1; // 1 也是它的一个因子
  for(int i = 2; i <= n / 2; i++){
    if (n % i == 0){
      sum = sum + i;
      factor[*index] = i;
      *index = *index + 1;
    }
  }
  if(sum == n){
    flag = 1;
  }
  return flag;
}

void print_result(int num, int factor[], int index)
{
  printf("%d = ", num);
  for(int j = 0; j < index; j++){
    printf("%d ", factor[j]);
    if(j != index-1){
      printf("+ ");
    }
  }
  printf("\n");
}
