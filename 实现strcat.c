#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//ģ��ʵ��strcat
char* my_strcat(char* arr, const char* gam)
{
	assert(arr&&gam);//����
	char *cpp = arr;
	//�ҵ�'\0'
	while (*arr)
	{
		arr++;
	}
	//׷��
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
