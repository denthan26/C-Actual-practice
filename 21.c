#include <stdio.h>
#define N 3
int main()
{
	int i, j, arr[N][N], sum = 0, sum1=0;
	
	printf("请输入3*3矩形的各个数：>");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if(i==j)
				sum += arr[i][j];
		}
	}
	j = N;
	sum1 = sum;
	i = 0;
	while (i < N)
	{
		sum1 += arr[i][j - 1];// 0 2;1 1;2 0
		i++;
		j = N - i;
	}
	sum1 = sum1 - arr[N / 2][N / 2];
	printf("%d\n", sum1);
	return 0;
}
