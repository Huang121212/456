// text.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include "test.h"
#include "assert.h"

int* add(int*pa)
{
	++*pa;
	return pa;
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*enum day
	{
		MON = 1, THE, WED, THU, FRI, SAT, SUN
	};
	printf("day size = %d\n", sizeof(day));
	printf("MON size = %d", sizeof(MON));
*/
	/*int a = 5;
	int* pa = &a;
	add(pa);
	printf("a=%d\n", a);*/
	//char* A = "Hellow World";
	//char B[] = "Hellow World";
	//printf("B  size =%d", sizeof(B));
	//printf("A  len =%d", strlen(A));
	A* a = new B;
	delete a;
	//int i = 0;
	//assert(i != 0);
	//union result
	//{
	//	float Chinese;
	//	float English;
	//};
	//printf("result size = %d\n ", sizeof(result));
	//struct user
	//{
	//	int id;
	//	char name[10];
	//	int old;
	//	union result;
	//};
	//printf("user size = %d\n", sizeof(user));//20 不加union 加了也是

	///*FILE* fp = fopen("../../../用户.txt","r");
	//if (fp == nullptr)
	//{
	//	printf("打开错误！\n");
	//	system("pause");
	//	return 0;
	//}
	//user userTemp;
	//rewind(fp);
	//char buffer[1024];
	//memset(buffer, 0, sizeof(buffer));
	//int i = 0;
	//while (i++< 2)
	//{
	//	memset(&userTemp, 0, sizeof(user));
	//	fscanf(fp, "%d %s %d", &userTemp.id, userTemp.name, &userTemp.old);
	//	printf("学号%d 姓名%s 年龄%d\n", userTemp.id, userTemp.name, userTemp.old);
	//	
	//}
	//fclose(fp);*/
	system("pause");
	return 0;
}

