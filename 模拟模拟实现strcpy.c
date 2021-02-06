#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strcpy
char* my_strcpy(char*s1, const char*s2)
{
	assert(s1 && s2);
	char*ret = s1;
	while (*s1++ = *s2++)//拷贝字符串，包括'\0'
	{
		;
	}
	return ret;//返回的目标空间的起始地址
}
int main()
{
	char arr1[] = "auhuhh";
	char arr2[] = "hjik";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	system("pause");
	return 0;
}
