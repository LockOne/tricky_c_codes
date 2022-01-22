#include<stdio.h>
#include<stdlib.h>


int  main() {

  printf("sizeof(int[10]) == %lu\n",sizeof(int[10]));

  int ** tmp = malloc(sizeof(int) * 10 * 5);


  printf("tmp[1] = %p, tmp[1][5] = %p, tmp[2] = %p, tmp[2][0] = %p\n", &(tmp[1]), &(tmp[1][5]), &(tmp[2]), &(tmp[2][0]));
  return 0;
}

