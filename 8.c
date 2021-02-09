//输入某年某日某月，判断这一天是这一年的第几天
#include <stdio.h>
int main()
{
	int year, month, day,days;
	//到月底有多少天，2月算成29天
	//不管是不是闰年，2月份的天数是对的，
	printf("请输入年月日：>");//2015,10,1    274
	scanf("%d,%d,%d", &year, &month, &day);
	int month1, month2, month3, month4, month5, month6, month7, month8, month9,month10, month11;
	month1 = 31;
	month2 = 60;
	month3 = 91;
	month4 = 121;
	month5 = 152;
	month6 = 182;
	month7 = 213;
	month8 = 244;
	month9 = 274;
	month10 = 305;
	month11 = 335;
	switch (month)
	{
	case 1:
		days = day;
		break;
	case 2:
		days = month1 + day;
		break;
	case 3:
		days = month2 + day;
		break;
	case 4:
		days = month3 + day;
		break;
	case 5:
		days = month4 + day;
		break;
	case 6:
		days = month5 + day;
		break;
	case 7:
		days = month8 + day;
		break;
	case 8:
		days = month7 + day;
		break;
	case 9:
		days = month8 + day;
		break;
	case 10:
		days = month9 + day;
		break;
	case 11:
		days = month10 + day;
		break;
	case 12:
		days = month11 + day;
		break;
	default:
		break;
	}
	//判断是否是闰年,闰年2月多一天
	if (year % 400 == 0)
	{
		//是闰年
		printf("%d\n", days);

	}
	else
	{
		//不是闰年
		days = days - 1;
		printf("%d\n", days);
	}
	return 0;
}


