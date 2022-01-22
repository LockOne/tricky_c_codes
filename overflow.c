#include<limits.h>

int main() {
  int a = INT_MAX;
  int b = -1;

  unsigned res;
  if (__builtin_mul_overflow(a , b , &res)) {
    printf("overflow!\n");
  }

  printf("a : %d\n",a );
}
