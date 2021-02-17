//一球从100米高度自由落下，每次落地后反跳回原高度的一半
#include <stdio.h>
int main()
{
	float s,h;
	int i;
	h = s = 100;
	for (i = 1; i <= 10; i++)
	{
		h = h / 2;
		//s = s + 3*h;
		if(i<10)
			s = s + 2 * h;
	}
	printf("%f %f", s, h);
	return 0;
}
//原理还未想明白
