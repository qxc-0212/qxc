#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
int find_half(int* arr, int len)
{
	int count = 0;
	int cur = 0;
	int i = 0;
	assert(arr != NULL);
	for (; i < len; ++i)
	{
		if (count == 0)
		{
			cur = arr[i];
			count = 1;
		}
		else if (arr[i] == cur)
			count++;
		else
			count--;
	}
	return cur;
}
int main()
{
	int arr[] = { 1, 2, 2, 2, 3, 2, 6, 2, 7, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d", find_half(arr, len));
	system("pause");
	return 0;
}

