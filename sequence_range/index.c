#include <stdio.h>

int sort(int array[], int start, int length){
  for(int i = 0; i < length-start-1; i++){
    for(int j = start; j < length - i - 1; j++){
      if(array[j] > array[j+1]){
        int tmp = array[j];
        array[j] = array[j+1];
        array[j+1] = tmp;
      }
    }
  }
}

int print_array(int array[], int start, int length){
  for(int j=start; j < length; j++){
    printf("%d ", array[j]);
  }
  printf("\n");
  return 0;
}

int main(){
  int a[100];
  int n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }

  int min = a[n-1];
  for(int j = n-2; j>=0; j--){
    min = min * a[j] + 1; 
  }
  
  for(int j = 1; j < n; j++){
    a[j] = a[j] * a[j-1] + 1;
    sort(a, j, n);
    print_array(a,j,n);
  }
  printf("max - min = %d - %d = %d\n", a[n-1], min, a[n-1] - min);
  return 0;
}
