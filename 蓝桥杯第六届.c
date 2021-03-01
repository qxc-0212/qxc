#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//隔行变色
int main()
{
	int i = 0;
	int sum = 0;//蓝色个数
	int t = 0;
	scanf("%d", &t);
	for (i = 1; i <= t;)
	{
		sum++;
		i += 2;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}

//立方尾不变
int find_sum(int i)
{
	int theret = 0;
	int sum = 0;
	int t = 1;
	for (t = 1; t < i; t++)
	{
		theret = pow(t, 3);
		if (t == (theret % 10))
		{
			sum++;
		}
	}
	return sum;
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d", find_sum(i));
	system("pause");
	return 0;
}

