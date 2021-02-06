#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strcat
char* my_strcat(char* arr, const char* gam)
{
	assert(arr&&gam);//断言
	char *cpp = arr;
	//找到'\0'
	while (*arr)
	{
		arr++;
	}
	//追加
	while (*arr++ = *gam++)
	{
		;
	}
	return cpp;
}
int main()
{
	char arr1[] = "auhuhh";
	char arr2[] = "hjik";
    printf("%s",my_strcat(arr1, arr2));
	system("pause");
	return 0;
}
