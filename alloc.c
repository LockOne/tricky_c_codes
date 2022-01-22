#include<stdlib.h>
#include<stdio.h>

struct astr {
  int a2;
  int a3;
  int a4;
  int a5;
  int a6;
  int a7;
  int a8;
};


int main() {


  printf(" size of struct astr : %lu\n", sizeof(struct astr));

  int num_elem = 10;
  struct astr * ptr = malloc(sizeof(struct astr) * num_elem);

  printf("alloced size : %lu\n", sizeof(struct astr) * num_elem);

  printf("alloc ptr : %p, ptr[10] address : %p, diff : %ld\n", ptr, &ptr[10], ((long) &ptr[10]) - ((long) ptr));
}
