//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
#include <stdio.h>
int main()
{
	int a, n, m;//2  5
	int t = 0;
	int i = 0;
	int k = 0;
	int arr[10] = { 0 };
	printf("请输入两个数：>");
	scanf("%d %d", &a, &n);
	if (n == 1)
	{
		printf("%d\n", a);
	}
	else//a=2  n=2   a+aa
	{
		t = a;
		k = a;
		for (m = 0; m < n-1; m++)
		{
			//   2       22      222
			a = a * 10;//   20      200     2000
			t = a + t;//    20 + 2  200+22  2000+222
			arr[m] = t;
			i  = i + arr[m];
		}
		printf("%d\n", i+k);
	}
	return 0;
}
