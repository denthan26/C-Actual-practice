//题目
//C语言实现将大写字母A，输出为小写字母a

#include <stdio.h>
int main()
{
	char character_big, character_small;
	character_big = 'A';
	character_small = character_big +32;
	printf("%c\n", character_small);
	return 0;
}


//打印字符是%c
//字符串%s
