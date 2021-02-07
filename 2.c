//题目
//用C语言计算存款利息。假设有本金1000元，想存一年，有三种方法可选择：
//活期，年利率为0.0036；
//一年期定期，年利率为0.0225；
//存两次半年定期，年利率为0.0198。
//请分别计算出一年后按3种方法所得到的本息和
#include<stdio.h>//头文件
int main() //主函数
{
	float interest_Rate1, interest_Rate2, interest_Rate3;//定义浮点型利率变量
	interest_Rate1 = 0.0036f; //初始化第一种方式年利率
	interest_Rate2 = 0.0225f; //初始化第二种方式年利率
	interest_Rate3 = 0.0198f; //初始化第三种方式年利率

	float principal_0, principal_1, principal_2, principal_3;//定义变量
	principal_0 = 1000;//初始化本金

	principal_1 = principal_0 * (1 + interest_Rate1);//第一种本息和
	principal_2 = principal_0 * (1 + interest_Rate2);//第二种本息和
	principal_3 = principal_0 * (1 + interest_Rate3 / 2) * (1 + interest_Rate3 / 2);//第三种本息和

	printf("第一种本息和：%f\n", principal_1);//输出第一种本息和
	printf("第二种本息和：%f\n", principal_2);//输出第二本息和
	printf("第三种本息和：%f\n", principal_3);//输出第三种本息和

	return 0; //函数返回值为0
}



//笔者答
#include <stdio.h>
int main()
{
	/*设本金为The_principal*/
	float The_principal = 1000;
	//三种年利率Annual_interest_rate(1/2/3)
	float annual_interest_rate1 = 0.0036f;
	float annual_interest_rate2 = 0.0225f;
	float annual_interest_rate3 = 0.0198f;
	//本息和 principal
	float principal_1 = 0;
	float principal_2 = 0;
	float principal_3 = 0;
	//计算本息和
	principal_1 = The_principal * (1 + annual_interest_rate1);
	principal_2 = The_principal * (1 + annual_interest_rate2);
	principal_3 = The_principal * (1 + annual_interest_rate3 / 2) * (1 + annual_interest_rate3 / 2);
	printf("第一种本息和是%f\n", principal_1);
	printf("第二种本息和是%f\n", principal_2);
	printf("第三种本息和是%f\n", principal_3);
	return 0;
}


//注意：在 C 语言中，如果不指定数据类型，那么小数常量会被认为是 double 类型的。 
如：float x;
    x = 1.2;
其中 x 是 float 类型的，但是 1.2 是 double 类型的，由于它是常量，所以编译器称为 const double。double 是不能隐式转换为 float 的。
这时候可改成 x=1.2f; 或者 x=1.2F; 就可以了。
