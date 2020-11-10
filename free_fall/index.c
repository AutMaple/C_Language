#include <stdio.h>

int main()
{
  float sum = 0;
  float distance = 100;
  for(int i = 1; i <= 10; i++){
    sum = sum + distance + distance / 2.0;
    distance = distance / 2.0;
  }
  printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",sum - distance, distance);
  return 0;
}
