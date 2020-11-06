#include <stdio.h>
#include <stdlib.h>

/*
 * 这个程序是检测计算机的内存对齐存储机制
 * 
 * 在C语言为结构体分配内存时，默认是将其他的类型向占用字节数最多的类型看齐
 * 目的是每一次访存都能一次性的将所需要的数据读出来，而不需要进行二次访存
 * */

typedef struct Node1{
  int a;
  char c;
  int b;
}N1;

typedef struct Node2{
  int a;
  char b;
  char c;
} N2;

int main(){
  printf("%d,%d\n", sizeof(N1), sizeof(N2));
  return 0;
}
