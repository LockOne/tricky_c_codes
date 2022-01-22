#include<stdio.h>
#include<stdlib.h>

int main() {
  char * envval = getenv("TMP_ENV");

  if (envval == 0) {
    printf("Can't get env TMP_ENV\n");
    return 0;
  }
  int val = atoi(envval);

  printf(" value : %s, %d\n", envval, val);
  
  return 0;
}
