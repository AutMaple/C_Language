#include <stdio.h>

int a[100] = { 0 };

void combrecur(int n, int r){
  int i;
  int j;
  for(i=n; i >= r; i--){
    a[r] = i;
    if(r>1){
      combrecur(i-1, r-1);
    }else{
      for(j=a[0]; j > 0; j--){
        printf("%d ", a[j]);
      }
      printf("\n");
    }
  }
}

int main(){
  int n;
  int r;
  scanf("%d%d", &n, &r);
  a[0] = r;
  combrecur(n, r);
  return 0;
}
