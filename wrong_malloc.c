#include<stdio.h>
#include<stdlib.h>



int main() {


  int * aptr = malloc(sizeof(int) * 10);


  aptr[12] = 30;


  return 0;
}
