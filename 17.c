#include <stdio.h>
//#include <string.h>
//#define ROW 7;
//#define COL 7;
int main()
{
	int i, j;
	char arr[7][7];
	for (i = 0; i < 7; i++)
	{
		//for (j = 0; j < 7; j++)
		//{
			if (i <= 3)
			{
				for (j = 0; j < (3-i); j++)
				{
					printf(" ");
				}
				for (j = 3 - i; j <= 3 + i; j++)
				{
					printf("*");
				}
				printf("\n");
				//if (strcmp(arr[i][3]) == ' ')
				//{
					/*arr[i][3] = '*';
					if (i > 0)
					{
						arr[i][3 + j] = '*';
						arr[i][3 - j] = '*';
					}*/
					//if (i > 0)
					//{
					//	arr[i][COL / 2 + 1 - i] = '*';
					//	arr[i][COL / 2 + 1 + i] = '*';
					//	//(*p)[COL]
					//}
				//}
			}
			else
			{
				for (j = 0; j < i - 3; j++)
				{
					printf(" ");
				}
				for (j = i - 3; j <= 9 - i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
		//}

	}
	return 0;
}





//因某些原因，代码未进行处理而发上来了
