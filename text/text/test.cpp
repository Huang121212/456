#include "stdafx.h"
#include "test.h"

char *GetMemory(void)
{
	char p[] = "Hellow World";
	return p;
}

void Test(void)
{
	char *str = NULL;
	str = GetMemory();
	printf(str);
}
A::A()
{
	printf("creat A\n");
}
A::~A()
{
	printf("close A\n");
}
B::B()
{
	printf("creat B\n");
}
B::~B()
{
	printf("close B\n");
}