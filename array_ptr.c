#include<stdio.h>


//pointer to pointer to int[3]
int (**a) [3];

//array[5] of pointer to int[4]
int (*b[5])[4];

//function pointer to int (int, long)
int (*f1)(int, long);

//fp array
int (*f2[5])(int, long);

//what?
//pointer to array[2] of pointer to int[5]?
int (*(*c[2]))[5];

//pointer to fp array?
int (*(*f3[5])) (int, long);

//array[5] of pointer to fp?
int (**f4[5]) (int, long) ;

//Impossible! (returning an array)
//int (**f5) (int, long) [5];

//Wrong! array to functions
//int (**f6)[10] (int,long);

//??
int (*(*d))[5];

typedef int int_array[5];
typedef int_array ** ptrptrint_array;

ptrptrint_array foo (void) {
 return 0;
};

//f7 == foo
int_array (**(*f7)(void))  = foo;

//f8 == foo
int (**(*f8)(void))[5] = foo;

typedef int (** ptrptrint_array2)[5];

//f9 == foo
ptrptrint_array2 (*f9)(void) = foo;

struct { int a; } * aptr;

int main() {
  return 0;
}
