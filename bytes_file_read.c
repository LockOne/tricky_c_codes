
#include<stdio.h>
#include<stdlib.h>

int main() {

  FILE * f;

  f = fopen("255.txt", "r");
  
  char buf[5];

  fgets(buf, sizeof(buf), f);

  printf(" buf : ");

  unsigned i;
  for (i = 0; i < 5; i ++){
    printf("%d, ",buf[i]);
  } 
  printf("\n");


  int x = *((int *) buf);

  printf("x : %d\n", x);

  fclose(f);

  f = fopen("-243.txt", "r");
  
  fgets(buf, sizeof(buf), f);

  printf(" buf : ");

  for (i = 0; i < 5; i ++){
    printf("0x%x, ",buf[i]);
  }
  printf("\n");

  x = *((int *) buf);

  printf("x : %d, 0x%x\n", x, x);

  char x2;
  fgets(&x2, 2, f);

  printf("x2 : %u, 0x%x\n", x2, x2);

  fclose(f);


  {
   f = fopen("12345.txt", "r");

   char x; 

   for (i = 0; i < 10 ; i++) {

     fgets(&x, 2, f);
     printf("x : %u, 0x%x\n", x,x);
   }


   unsigned char x2;
   fgets(&x, 2, f);
   x2 = x;
   printf("x2 : %u, 0x%x\n", x2, x2);

   fclose(f);

   unsigned char x3;
   char x4 = -1;
   x3 = x4;
   printf("x3 : %u, 0x%x\n", x3, x3);
  }

}
