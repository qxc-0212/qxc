
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//求1到2019中含0，1，2，9的数的和
//int add_dd(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		if (n % 10 == 1 || n % 10 == 9 || n % 10 == 1 || n % 10 == 0)
//			return 1;
//		n /= 10;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	long long sum = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//int mad(int i, int j)//i为长，j为宽
//{
//	int count = 0;//sum为总数
//	if (i == j){
//		return count + 1;
//	}
//	else{
//		if (i>j){
//			count = min(i - j, j, count) + 1;
//		}
//		else{
//			count = min(j - i, i, count) + 1;
//		}
//	}
//	return count;
//
//int main()
//{
//	int i=0, j=0;
//	scanf("%d%d", &j, &j);
//	printf("%d",mad(i, j));
//	system("pause");
//	return 0;
//}
