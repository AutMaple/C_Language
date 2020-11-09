#include <stdio.h>

int main()
{
  int count = 0;
  for(int i = 101; i <=200; i++){
    int flag = 1;
    for(int j = 2; j <= i/2; j++){
      if(i % j == 0){
        flag = 0;
        break;
      }
    }
    if(flag){
      printf("%5d", i);
      count++;
      if(count % 4 == 0){
        printf("\n");
      }
    }
  }

  return 0;
}
