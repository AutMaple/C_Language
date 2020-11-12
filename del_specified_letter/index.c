#include <stdio.h>

char* del_letter(char* str, char* char_set);

int main()
{
  char s[3] = "ac";
  char s2[100] = "acabfjskfjslkaaacccccdfjksjksfjccc";
  printf("%s\n", del_letter(s2, s));
  return 0;
}

char* del_letter(char* str, char* char_set)
{
  int hash[256] = { 0 };
  int index = 0;
  while(char_set[index] != '\0')
  {
    hash[char_set[index]] = 1;
    index++;
  }
  index = 0;
  int current_index = 0;
  while(str[index] != '\0')
  {
    if(!hash[str[index]])
    {
      str[current_index] = str[index];
      current_index++;
    }
    index++;
  }
  str[current_index] = '\0';
  return str;
}
