#include<stdio.h>

//递归函数

/*void print(int x)//函数的实现
{
	if (x > 9)//递归需要有条件使递归停止，不然会栈溢出
	{
		print(x / 10);
	}
	printf("%d  ", x % 10);
}
int main()
{
	unsigned int i = 0;
	scanf_s("%d", &i);
	print(i);//函数的定义

	return 0;
}
*/


//自己写一个能数  字符串  长度的代码
/*int my_strlen(char* n)
{
	int count = 0;
	while (*n != '\0')
	{
		count++;
		printf("%s\n", n);
		n++;
	}
	return count;
}

int main()
{
	char arr[] = "dasda";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}
*/



//不设置外部变量，只利用递归法 数 字符串
/*int my_strlen(char* n)
{
	if (*n != '\0')
	{
		return 1 + my_strlen(1 + n);//b站p12有讲解部分
	}
	else
		return 0;
}

int main()
{
	char arr[] = "dasda";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}*/


//利用递归法 求n的阶乘
/*int fac(int x)
{
	if (x <= 1)
		return 1;
	else
		return x * fac(x - 1);
}
int main()
{
	int i = 0;
	int j = 0;
	scanf_s("%d", &i);
	j = fac(i);
	printf("%d\n", j);
	return 0;
}*/


//循环语句  斐波数列
/*int fac(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;

}
int main()
{
	int a = 0;
	int ret = 0;
	scanf_s("%d", &a);
	ret = fac(a);
	printf("%d\n", ret);
	return 0;
}
*/


//循环 语句前20项斐波
/*int fax(int n)
{
	int sum = 0;
	if (n == 1 || n == 2)
		return 1;
	else
		sum = fax(n-1) + fax(n-2);
		return sum;
}
int main()
{
	int i = 1;
	for (i = 1; i <= 20; i++)
	{
		printf("%d ", fax(i));
	}
	return 0;
}*/


//汉诺塔
//青蛙跳台阶
