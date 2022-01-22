/*
 * DO NOT EDIT THE FOLLOWING LINES (1-8)
 */

extern void *malloc(unsigned long size);
#include "crown.h"
#include "overflow.i"
#include "overflow.i.main.stub.c"

/*
 * YOU CAN EDIT THE FOLLOWING LINES
 */
#ifdef AFL
char * tc_file;
#endif


// Test driver for function _main
_main_driver()
{
	// Set symbolic variables for the stub functions
	init_symbolic_stub();
	int __ret =	_main();
	char __buf[512];
	sprintf(__buf, "echo %d > .CROWN.return.txt",__ret);
	system(__buf);
}

int main(int argc, char ** argv){
#ifdef AFL
tc_file = argv[1];
#endif
	_main_driver();
	return 0;
}