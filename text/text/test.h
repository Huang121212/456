#ifndef _TEST_H
#define _TEST_H

void GetMemory(char*p);
char *GetMemory(void);
void Test(void);
class A
{
public:
	A();
	virtual ~A();
};
class B : public A
{
public:
	B();
	~B();
};
#endif