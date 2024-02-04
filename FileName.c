#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)

#include <stdio.h>
int main(int argc, char** argv)
{
	int arry[10] = { 1,4,3,5,7,8,9,2,6,10 };
	int sz = sizeof(arry) / sizeof(int);
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arry[j] < arry[j + 1]) //从大到小排序
			{
				arry[j] ^= arry[j + 1];
				arry[j + 1] ^= arry[j];
				arry[j] ^= arry[j + 1];
			}
		}
	}
	///////////////////////////////////////
	for (int i = 0; i < sz; i++)
	{
		printf("%d\t", arry[i]);
	}
	printf("\n");

	return 0;
}