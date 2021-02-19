//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
#include <stdio.h>
int main()
{
	int i,j;//m分子，n分母
	float sum = 0,now, m, n;//sum最后答案，now当前分子的数
	n = 1;
	m = 2;
	for (i = 0; i < 20; i++)
	{
		//j=m;
		//m=m+n
		//m=j
		now = m / n;
		sum += now;
		j = m;
		m = m + n;
		n = j;
	}
	printf("%9.6f\n", sum);
	return 0;
}
