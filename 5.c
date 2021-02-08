//题目 有1，2，3，4个数字，能组成多少个互不相同且无重复数字的三位数，都是多少
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && j != k && k != i)//要判断ijk三个数是否相同
				{
					printf("%d,%d,%d\n", i, j, k);
					count++;
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}

