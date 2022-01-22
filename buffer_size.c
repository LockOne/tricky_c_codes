#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

  char buffer[1];
  buffer[0] = 'a';

  printf("buffer sizeof : %lu\n", sizeof(buffer));
  printf("buffer strlen: %lu\n", strlen(buffer));

  char buffer2[2];
  buffer2[0] = 'a';
  buffer2[1] = 0;

  printf("buffer2 sizeof : %lu\n", sizeof(buffer2));
  printf("buffer2 strlen: %lu\n", strlen(buffer2));
}
