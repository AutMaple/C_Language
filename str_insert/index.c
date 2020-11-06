#include <stdio.h>

int main()
{
  char str1[100];
  char str2[100];
  int index;
  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%d", &index);
  int i = 0; 
  int j = 0;
  while(str1[i] != '\0'){
    printf("%c", str1[i]);
    if(i == index -1){
      while(str2[j] != '\0'){
        printf("%c", str2[j]);
        j++;
      }
    }
    i++;
  }
  return 0;
}
