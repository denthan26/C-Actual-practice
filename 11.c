//输入两个正整数m和n，求其最大公约数和最小公倍数。
#include <stdio.h>
int main()
{
	int a, b, t, n, r;
	a = 12;
	b = 26;
	if (a < b)//将ab的值对调，使a>b
	{
		t = b;
		b = a;
		a = t;
	}
	r = a % b;
	n = a * b;//最大公倍数=(a*b)/最大公约数
	while(r)
	{
		a = b;
		b = r;
		r = a % b;
	} 
	printf("最大公约数%d 最大公倍数%d", b, n / b);
	return 0;
}
