#include "libtest.h"

static int MyNumber;

void addNum(int x)
{
	MyNumber += x;
}

void initNum(int value)
{
	MyNumber = value;
}

int getNum()
{
	return MyNumber;
}