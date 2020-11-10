#include <stdio.h>


int main()
{
  for(int a = 'x'; a <= 'z'; a++){
    if (a != 'x'){
      for(int b = 'x'; b <= 'z'; b++){
        if ( b != a ){
          for(int c = 'x'; c <= 'z'; c++){
            if ( c != 'x' && c != 'z' && c != b && c != a){
              printf("顺序为：a--%c\tb--%c\tc--%c\n",a,b,c);
            } 
          }
        }
      }
    }
  }
  return 0;
}
