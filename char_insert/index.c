#include <stdio.h>

int main()
{
  char str1[100];
  char str2[100];
  char max;
  char min;
  scanf("%s %s", str1, str2);
  int i = 1;
  min = str1[0];
  max = str2[0];
  while(str1[i] != '\0'){
    if(str1[i] < min){
      min = str1[i];
    }
    i++;
  }
  i = 1; 
  while(str2[i] != '\0'){
    if(str2[i] > max){
      max = str2[i];
    }
    i++;
  }
  i = 0;
  while(str1[i] != '\0'){
    printf("%c", str1[i]);
    if(str1[i] == min){
      printf("%c", max);
    }
    i++;
  }
  return 0;
}
