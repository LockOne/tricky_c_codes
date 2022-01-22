
#include<stdio.h>

int main() {

  unsigned char a1 = 0x3F;
  unsigned char a2 = 0x80;
  unsigned char a3 = 0;
  unsigned char a4 = 0;

  printf(" int a1 : %d, %x\n", (int) a1, (int) a1);
  printf(" int a2 : %d, %x\n", (int) a2, (int) a2);

  printf(" int a1 << 24 : %d, 0x%x\n", ((int) a1) << 24 , ((int) a1) << 24);

  int tmp = a1 << 24;

  printf(" tmp : %d, 0x%x\n", tmp, tmp);

  tmp = tmp | (((int) a2) << 16);

  printf(" tmp : %d, 0x%x\n", tmp, tmp);

  int d = (a1 << 24) | (a2 << 16) | (a3 << 8) | a4;

  printf( " d : %d, 0x%x\n" , d, d);

  float af = (float) d;

  printf( "af : %f\n", af);

  float af2 = *((float*) &d);

  printf ( "af2 : %f\n", af2);

  {

    printf("Wrong !\n");
    char a1 = 0x3F;
    char a2 = 0x80;
    char a3 = 0;
    char a4 = 0;
  
    printf(" int a1 : %d, %x\n", (int) a1, (int) a1);
    printf(" int a2 : %d, %x\n", (int) a2, (int) a2);
  
    printf(" int a1 << 24 : %d, 0x%x\n", ((int) a1) << 24 , ((int) a1) << 24);
  
    int tmp = a1 << 24;
  
    printf(" tmp : %d, 0x%x\n", tmp, tmp);
  
    tmp = tmp | (((int) a2) << 16);
  
    printf(" tmp : %d, 0x%x\n", tmp, tmp);
  
    int d = (a1 << 24) | (a2 << 16) | (a3 << 8) | a4;
  
    printf( " d : %d, 0x%x\n" , d, d);
  
    float af = (float) d;
  
    printf( "af : %f\n", af);
  
    float af2 = *((float*) &d);
  
    printf ( "af2 : %f\n", af2);
  }

}
