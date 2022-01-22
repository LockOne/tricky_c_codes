#include<stdio.h>
#include<stdlib.h>

int main() {

  char a = -1;

  int d = a << 24 | a << 16 | a << 8 | a;

  printf("d : %d\n", d);
}
