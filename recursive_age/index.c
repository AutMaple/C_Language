#include <stdio.h>

int recursive_age(int n);


int main()
{
  int age = recursive_age(5);
  printf("第五个人的年龄是: %d\n", age);
  return 0;
}

int recursive_age(int n)
{
  if(n == 1)
  {
    return 10;
  }
  return 2 + recursive_age(n-1);
}


