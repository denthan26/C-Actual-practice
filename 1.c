//使用中间变量
#include <stdio.h>
int main()
{
	float F = 98.0;
	float C = 0.0;
	float tmp = 0.0;
	tmp = F - 32;//应该没问题------------------------------------------------
	tmp = 5 * tmp;
	C = tmp / 9;
	printf("%f°C\n", C);
	return 0;
}

//直接做法
#include<stdio.h>//头文件
 int main() //主函数
 {
   float f_Degree,centigrade; //定义浮点型变量
   f_Degree=98.0;//初始化华氏度变量
   centigrade=(5.0/9)*(f_Degree-32);//注意此处应该是5.0-------------------
   printf("华氏度98的摄氏度为：%f\n",centigrade);//输出结果
   return 0;//函数返回值为0
 }
