#include <stdio.h>
void reverse(char* s)//传的是一个字符的地址，用字符指针
{
	//计算字符串的长度
	int len = 0;
	char* p = s;
	while (*p != 0)
	{
		len++;
		p++;
	}
	//交换
	//交换次数-第一个变成最后一个，第二个变成最后第二个
	int i = 0;
	char c;
	while (i < len / 2 - 1)
	{
		c = *(s + i);//将第i个字符赋值给c
		*(s + i) = *(s + len - 1 - i);//将第i个字符变成与之相对应的最后那个字符
		*(s + len - 1 - i) = c;
		i++;
	}
	printf("%s\n", s);
}
int main()
{
	char s[] = "www.runoob.com";
	printf("www.runoob.com =>  ");
	reverse(s);
	printf("%s\n", s);
	return 0;
}
