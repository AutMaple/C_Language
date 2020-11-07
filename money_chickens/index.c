#include <stdio.h>

int main(){
  for(int i = 0; i <= 20; i++){
    for(int j = 0; j <=33; j++){
      float sum = i * 5 + j * 3 + (100 - i - j) / 3.0; 
      if(sum == 100){
        printf("公鸡有%d只,母鸡有%d只,小鸡有%d只\n", i, j, 100 - i - j);
      }
    }
  }
  return 0;
}
