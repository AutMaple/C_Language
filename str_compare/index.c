#include <stdio.h>
#include <string.h>


int main(){
  char strs[3][100];
  for(int i = 0; i < 3; i++){
    scanf("%s", strs[i]);
    getchar();
  }
  for(int i = 0; i < 3; i++){
    printf("%s\n", strs[i]);
  }
  if(strcmp(strs[0], strs[1]) < 0){
    if(strcmp(strs[0], strs[2]) < 0){
      printf("%s\n", strs[0]);
      if(strs[1] <strs[2]){
        printf("%s\n", strs[1]);
        printf("%s\n", strs[2]);
      }else{
        printf("%s\n", strs[2]);
        printf("%s\n", strs[1]);
      }
    }else{
      printf("%s\n", strs[2]);
      printf("%s\n", strs[0]);
      printf("%s\n", strs[1]);
      return 0;
    }
  }else{
    if(strcmp(strs[1], strs[2]) < 0){
      printf("%s\n", strs[1]);
      if(strcmp(strs[0], strs[2]) < 0){
        printf("%s\n", strs[0]);
        printf("%s\n", strs[2]);
      }else{
        printf("%s\n", strs[2]);
        printf("%s\n", strs[0]);
      }
    }else{
     printf("%s\n", strs[2]);
     printf("%s\n", strs[1]);
     printf("%s\n", strs[0]);
    }
  }
  return 0;
}
