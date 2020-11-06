#include <stdio.h>

int main(){
  int n;
  int a[100][100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    a[i][0] = 1;
    a[i][i] = 1;
    for(int j = 1; j < i; j++){
      a[i][j] = a[i-1][j-1] + a[i-1][j];
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 1; j < n -i; j++){
      printf("   ");
    }
    for(int j = 0; j <= i; j++){
      printf("%6d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
