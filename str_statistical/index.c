#include <stdio.h>
#include <string.h>

#define row_max 100
#define col_max 100

int main()
{
  char strs[row_max][col_max];
  int i = 0;
  while(1){
    scanf("%[^\n]s", strs[i]);
    if(!strcmp(strs[i], "stop")){
      break;
    }
    i++;
    getchar();
  }
  for(int k = 0; k < i; k++){
    int start = 0;
    int end;
    int max = 0;
    int max_start;
    int max_end;
    int length = 0;
    int counter = 0;
    int index = 0;
    while(strs[k][index] != '\0'){
      if(strs[k][index] == 32){
          end = index-1;
          length = end -start + 1;
          if(length > max){
            max = length;
            max_start = start;
            max_end = end;
          }
          start = index+1;
          counter--;
      }
      counter++;
      index++;
    }
    end = index - 1;
    if((end - start +1) > max){
      max_start = start;
      max_end = end;
    }
    printf("%d ", counter);
    for(int j = max_start; j<=max_end; j++){
      printf("%c", strs[k][j]);
    }
    printf("\n");
  }
  return 0;
}
