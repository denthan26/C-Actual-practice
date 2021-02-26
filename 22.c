//有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
//升序
#include <stdio.h>
int main()
{
	int arr[11] = { 1,3,5,7,9,10,25,26,30,35 };
	int i, j, number, temp1, temp2;
	for (i = 0; i < 10; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("请输入你要添得数：>");
	scanf("%d", &number);//8
	if (number > arr[9])
	{
		arr[10] = number;
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (arr[i] > number && arr[i - 1] < number)
			{
				temp1 = arr[i];//arr[i]=9->temp1=9
				arr[i] = number;//arr[i]=8
				for (j = i + 1; j < 11; j++)
				{
					temp2 = arr[j];//arr[j]=10->temp2=10
					arr[j] = temp1;//arr[j]=9
					temp1 = temp2;//temp1=10
				}
				break;
			}
		}
	}
	for (i = 0; i < 11; i++)
		printf("%4d", arr[i]);
	printf("\n");
	return 0;
}
//插入一组数
