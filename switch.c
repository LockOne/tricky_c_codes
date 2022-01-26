#include<stdio.h>


int main() {


  int a = 30;
  float b = 243.2;
  int * p = &a;


  unsigned long d = (unsigned long) -1;

  switch(a){
    case 2 ... 2000:
      a = a + 3;
    break;
    case 2005: 
      break;
    default:
      return 3;
  }

  switch(d){
    case 2 ... 3:
      a = a + 3;
    break;
    case 5: 
      break;
    default:
      return 3;
  }




//Nope, switch operands need to be integers
/*
  switch(b) {
    case 1.2:
      a  = 3;
      break;
  
    default:
      return 43;
  }

  switch(p) {

    case 0:
       p = 0;
       break;

    case 20:
       p =  &a;
       break;
    case &b:
       b = b + 3;
       break;
    default:
       break;
  }
*/
  return 0;


}
