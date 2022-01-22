#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct a {
  int *const *  ptr1;
};

void foo(struct a * ptr, int * const * ptr2) {
  printf("%p\n", ptr2);
}

int main() {
  struct a b;
  int aint;
  int * aintptr = &aint;
  foo(&b, &aintptr);
  return 0;
}
