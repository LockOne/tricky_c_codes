#include<stdio.h>
#include<stdlib.h>


struct a {

  const int field1;
};

int main() {


  struct a * ptr = malloc(sizeof(struct a));


  *(int *)&ptr->field1 = 30;
 

  return 0;
}
