//比较三个数的大小
#include <stdio.h>
int text(int x, int y, int z)
{
	if (x - y == 0 || x - z == 0 || y - z == 0)
	{
		if (x == y)
		{
			if (x > z)
				return x;
			else
				return z;
		}
		else if (x == z)
		{
			if (x > y)
				return z;
			else
				return y;
		}
		else
		{
			if (z > x)
				return z;
			else
				return x;
		}
	}
	else
	{
		if (x > y && z > z)
			return x;
		else if (y > x && y > z)
			return y;
		else
			return z;
	}

}
int main()
{
	int x, y, z;
	x = 20;
	y = 66;
	z = 66;
	printf("这三个数的最大值是%d\n", text(x,y,z));
	return 0;
}
