#include <stdio.h>

#define row_max 100
#define col_max 200

int main()
{
  int row;
  char str[row_max][col_max];
  char str1[100];
  scanf("%d", &row);
  for(int i = 0; i < row; i++){
    getchar();
    scanf("%[^\n]s", str[i]);
  }
  for(int i = 0; i < row; i++){
    int counter = 0;
    int j = 0;
    while(str[i][j] != '\0'){
      printf("%d ", str[i][j] - '0');
      if((str[i][j] - '0' >= 0) && (str[i][j] - '0' <= 9)){
        counter++;
      }
      j++;
    }
    printf("%d\n", counter);
  }
  return 0;
}
