//对10个数进行排序
#include <stdio.h>
void big_small(int* p);
void small_big(int* p);

void big_small(int* p)
{
	int i, arr[10], j;
	for (i = 0; i < 10; i++)
	{
		arr[i] = *(p + i);
	}
	for (i = 0; i < 9; i++)
	{
		int bet = i;
		int temp;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[bet] < arr[j])
			{
				bet = j;
			}
		}//arr[bet]最大
		//把arr[bet]与arr[i]交换
		temp = arr[i];
		arr[i] = arr[bet];
		arr[bet] = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
void small_big(int* p)
{
	int i, arr[10], j;
	for (i = 0; i < 10; i++)
	{
		arr[i] = *(p + i);
	}
	for (i = 0; i < 9; i++)
	{
		int bet = i;
		int temp;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[bet] > arr[j])
			{
				bet = j;
			}
		}//arr[bet]最小
		//把arr[bet]与arr[i]交换
		temp = arr[i];
		arr[i] = arr[bet];
		arr[bet] = temp;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[10], i, cho;
	printf("请输入10个需要排序的数");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	printf("请选择降序还是升序:\n");
	printf("1：降序  2：升序\n");
	printf("请选择：>");
	scanf("%d", &cho);//输入整型不需要清空缓冲区
	//for (i = 0; i < 10; i++)
		//printf("%d ", arr[i]);
	//printf("%d", cho);
	switch (cho)
	{
	case 1:
		big_small(arr);
		break;
	case 2:
		small_big(arr);
		break;
	default:
		break;
	}
	return 0;
}
