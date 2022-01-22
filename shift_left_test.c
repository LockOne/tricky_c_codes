#include<stdio.h>


int main() {
  unsigned char a = 255;

  printf("a << 1 : %d\n", ((unsigned char) a << 1));

  unsigned char b = a << 7;

  printf("b = a<< 7 : %d\n", b);

  unsigned char c = b << 1;

  printf("c : %d\n", c);

}
