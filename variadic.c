#include<stdio.h>
#include<stdlib.h>


typedef void (*end)(void *, const char *, ...);

void foo (void * par1, const char* par2, ...) {
  return;
}

end f1 = foo;

int main() {

}


