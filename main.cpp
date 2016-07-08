#include <stdio.h>
#include "libtest.h"

int main(int argc, char* argv[])
{
	initNum(50);
	printf("The number should be 50: %i\n", getNum());
	addNum(20);
	printf("Added 20... : %i", getNum());
	
	return 0;
}