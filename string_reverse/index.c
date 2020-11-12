# include <stdio.h>

#define max 100


int str_len(char* str);
char* reverse_str(char* str);
void print_str(char* str);

int main(void)
{
  char str[max];
  char* new_str;
  scanf("%[^\n]s", str);
  new_str = reverse_str(str);
  print_str(new_str); 
  return 0;
}

int str_len(char* str)
{
  int len = 0;
  while(str[len] != '\0')
  {
    len++;
  }
  return len;
}

char* reverse_str(char* str)
{
  int length = str_len(str);
  for(int i = 0; i < length / 2; i++)
  {
    char tmp = str[i];
    str[i] = str[length-i-1];
    str[length-i-1] = tmp;
  }
  return str;
}

void print_str(char* str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}
