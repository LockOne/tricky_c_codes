#include<stdio.h>
#include<stdlib.h>

void foo (int a, int b) {

  if (a == 4) {
    a = a + 3;
  }

  if (a == 124123) {
    b=  b + 24;
  } 
  return;
}


int main() {

  int a = 3;
  int b = 45;
 

  foo(a, b);
  return 0;
}
