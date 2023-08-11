#include<stdio.h>

//求两个数字的最大公约数
/*int main()
{
	int m, n, t,r;
	printf("输入的第一个数=");
	scanf_s("%d", &m);
	printf("\n输入的第二个数=");
	scanf_s("%d", &n);//取地址一定不要加\n。
	if (m < n)
	{
		t = n;
		n = m;
		m = t;
	}
	do
	{
		r = m % n;
		m = n;
		n = r;
	}
		while (r != 0);
		printf("最大公约数=%d\n", m);

	return 0;
}*/

//编写程序打印金字塔图形
/*int main()
{
	int i, k,j;
	for (i = 0; i <= 4; i++)
	{
		for (k = 0; k < 4-i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}*/


//百鸡问题
/*int main()
{
	int x, y, z;
	for (x = 0; x <=20; x++)
	{
		for (y = 0; y <= 33; y++)
		{
			z = 100 - x - y;
			if(5*x+3*y+z/3.0==100)
			printf("x=%dy=%dz=%d\n", x, y, z);
		}
	}
	return 0;
}
*/

//有break的函数，只是跳出当前的循环语句
/*int main()
{	
	int sum = 0, number;
	while (1)
	{
		scanf_s("%d", &number);
		if (number == 0)
			break;
		sum += number;
	}
	printf("%d\n", sum);
	return 0;
}*/

//没有break，但是跟上面实现的功能一样
/*int main()
{
	int sum = 0, number;
	scanf_s("%d", &number);
	while (number != 0)
	{
		sum += number;
		scanf_s("%d", &number);
	}
	printf("%d\n", sum);
	return 0;
}*/

/*int main()
{
	int i=0,j ,sum = 0 ;
	while (i < 5)
	{
		for (j = 0; j < 5; j++)
		{
			sum += i + j;
			if (j == 1)break;
		}
		i++;
	}
	return 0;
}
*/

//输出100~200之间不能被3和7同时整除的数
/*int main()
{
	int i,j,n=0;
	for (i = 100; i < 200; i++)
	{
		for (j = 1; j < 3; j++)
		{
			if (i % 2 == 0 || i % 4 == 0)//修改之后了
			{
				continue;//结束当前循环语句，跳转到下一次循环
				//continue后面的 printf（“shuhu”）就不在执行
			}
			printf("shuhu");
		}
		
		printf("%d\t", i);
		n++;
		if (n % 10 == 0)
			printf("\n");
	}
	return 0;
}
*/
