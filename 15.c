//猴子吃桃
#include <stdio.h>
int main()
{
	//从最后一天往前算
	int day, i, x, q;
	//day = 9;
	x = 1;
	for (i = 9; i > 0; i--)
	{
		q = (x + 1) * 2;
		x = q;
	}
	printf("%d\n", q);
	//int a,s,c;//第一天总共摘得桃,剩下的桃,吃的桃
	//int i = 0;
	//int t = a;
	//for (i = 0; i < 9; i++)
	//{
	//	c = a / 2 + 1;
	//	s = a - c;
	//	a = a - c;
	//}
	//s = 1;
	//printf("%d\n", a);
	return 0;
}
