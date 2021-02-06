#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrcmp
int my_strcmp(const char*s1, const char*s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char arr1[] = "auhuhh";
	char arr2[] = "hjik";
	int ret=my_strcmp(arr1, arr2);
	if (ret > 0)
		printf(">");
	else if (ret == 0)
		printf("=");
	else
		printf("<");
	system("pause");
	return 0;
}
