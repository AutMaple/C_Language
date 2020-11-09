#include <stdio.h>

int main()
{
  int a = 176;
  int b = 219;
  printf("%c%c%c%c%c\n",b, a, a, a, b);
  printf("%c%c%c%c%c\n",a, b, a, b, a);
  printf("%c%c%c%c%c\n",a, a, b, a, a);
  printf("%c%c%c%c%c\n",a, b, a, b, a);
  printf("%c%c%c%c%c\n",b, a, a, a, b);
  return 0;
}
