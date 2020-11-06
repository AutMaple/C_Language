# include <stdio.h>

#define max 100


int main(void)
{
  char str[max];
  scanf("%[^\n]s", str);
  int k = 0; 
  int counter = 0;
  while(str[k] != '\0'){
    counter++;
    k++;
  }
  for(int i = counter - 1; i >= 0; i--){
    printf("%c", str[i]);
  }
  printf("\n");
  return 0;
}
