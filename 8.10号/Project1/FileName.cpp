#include <stdio.h>

/*void  main()
{
	int year;
	printf("输入的年份：");
	scanf_s("%d", &year);//注意没有\n
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

		printf("%d是闰年\n", year);
	else
		printf("%d不是闰年\n", year);
}*/

/*int main()
{
	int a = 3;
	int b = 44;
	int m = a < b ? a : b;
	printf("%d\n", m);
	return 0;
}*/

//if  else  语句
/*int main()
{
	int age;
	scanf_s("%d", &age);
	if (age >= 18 && age < 25)
		printf("qingnian" );
	else if (age >= 25&& age < 45)
		printf("zhuangnian");
	else if (age >= 45 && age < 65)
		printf("qan");
	else if (age >= 65 && age < 90)
			printf("qingnian");
	else 
		printf("laobus");
	return 0;
}
*/

//多个if else的匹配关系
/*int main()
{
	int a = 1;
	int b = 4;
	if (a == 0)
		if (b == 1)
			printf("ss");
	else//else 与他最近的那个if匹配，而不是看格式
		printf("gg");
	return 0;
}
int main()
{
	int a = 1;
	int b = 4;
	if (a == 0)//加一个{}，可以使得else与想要的if匹配
	{
		if (b == 1)
		printf("ss");
	}
	else
		printf("gg");
	return 0;
}*/

//判断一个数是不是奇数
/*int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("%d是基数\n", a);
	else
		printf("%d不是基数\n", a);
	return 0;
}*/

//输出1-100之间的奇数
/*int main()
{
	int a=0;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d是基数\n", a);
		else
			printf("%d不是基数\n", a);
		a++;
	}	
	return 0;
}*/

//switch语句，break是结束是结束标志
/*int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)//输入的数字（必须是整型表达式）代表从哪进去，遇到break就结束
	{
	case 1:printf("星期一"); break;//case＋整型常量表达式：语句;break;
	case 2:printf("星期2"); break;
	case 3:printf("星期3"); break;
	case 4:printf("星期4"); break;
	case 5:printf("星期5"); break;
	case 6:printf("星期6"); break;
	case 7:printf("星期7"); break;
	case 8:printf("星期8"); break;
	default:printf("错误"); break;
	}
	return 0;
}*/


//switch语句的作业
/*int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
		case 1:n++;
		case 2:m++; n++; break;
		}
	case 4:m++; break;
	default:break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}
*/

//continue语句的含含义
/*int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 6)
			continue;//不执行后面的代码，直接跳转到前面while语句判断部分
		printf("%d\n", i);
		i++;
	}
	return 0;
}
*/

/*int main()
{
	int ch = getchar();//getchar  获取一个字符的意思
	printf("%c\n", ch);
	putchar(ch);//输出字符的意思，等价于printf（“%d\n”）
	
	return 0;

	//
	int main()
	{
		int ch = 0;
		while ((ch = getchar()) != EOF)//ctrl＋z表示程序结束
		{
			putchar(ch);
		}
		return 0;
	}
	
}*/



