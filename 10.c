//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
#include <stdio.h>
int main()
{
	int input;
	char grade;
	printf("请输入你的分数：>");
	scanf("%d", &input);
	grade = (input >= 90) ? 'A' : ((input >= 60 && input <= 89) ? 'B' : 'C');
	printf("你的等级是%c\n", grade);
	return 0;
}
