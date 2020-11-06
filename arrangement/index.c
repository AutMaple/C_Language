#include <stdio.h>
#include <stdlib.h>

int main()
{
  for(int i = 1; i < 5; i++){
    for(int j = 1; j < 5; j++){
      for(int k = 1; k < 5; k++){
        if(i != j && i != k && k != j){
          printf("%d, %d, %d\n", i, j, k);
        }
      }
    }
  }
  return 0;
}
