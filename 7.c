//题目 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include <stdio.h>
#include <math.h>
long text(long x, long y)
{
    long j,k;//开方
	j = sqrt(x);
	k = sqrt(y);
	//判断j*j等不等于x
	if (j * j == x && k * k == y)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long i = 0;
	long m;//第一个平方数
	long n;//第二个平方数
	//循环10000次
	for (i = -101; i <= 10000; i++)
	{
		m = i + 100;
		n = m + 168;
		if (m >= 0 && n > 0)
		{
			//判断mn是否可以被开方
			if (text(m, n) == 1)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}


