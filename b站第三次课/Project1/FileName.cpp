#include<stdio.h>

//原码 反码 补码
/*int main()
{
	int a = 0;
	int b = ~a;
	//补码：11111...11111，补码减一得到反码
	//反码：11111...11110，反码除第一位取反得到原码
	//原码：10000...00001，源码对应的就是-1.
	printf("%d\n", b);
	return 0;

}*/

//前后++
/*int main()
{
	int a = 90;
	int b = ++a;
	printf("a=%d  b=%d\n", a, b);
	//后置++（a++），先使用，再++
	//前置++(++a)，先++，后使用
	return 0;
}
*/

//强制类型转换( )
/*int main()
{
	int a = (int)7.65;//double类型转成int型
	printf("%d\n", a);
	return 0;
*/

//条件操作符，也是三目操作符
/*int main()
{
	int a = 12;
	int b = 90;
	int max = 0;
	max = (a > b ? a: b);//a>b吗，是就输出a，不是就输出b
	printf("%d\n", max);
	return 0;
}*/

//类型重定义
/*int main()
{
	typedef unsigned int u_int;//将unsigned int重命名为u_int.
	unsigned int s = 30;
	u_int k = 30;
	printf("%d\n", k);
	return 0;
}*/

//static修饰局部变量 使得局部变量生命周期变长
//static修饰局部变量 改变了全局变量的作用域
/*void text()
{
	static int a = 1;
	a++;
	printf("%d\n", a);//加static输出的是23456
}
int main()
{
	int i = 0;
	while (i < 5);
	{
		text();
		i++;
	}
	return 0;
}
*/
//extern 引用外部变量的声明
/*extern int Add(int, int);
int main()
{
	int a = 12;
	int b = 34;
	int sum = Add(a, b);
	printf("%d\n", sum);
}
*/

//取地址
/*int main()
{
	int a = 34;
	int* p = &a;//定义指针变量p来存储a的地址（int*p）
	printf("%p\n", &a);//"%p\n"是用来输出地址的
	printf("%p\n", p);
	*p = 20;//*p是解引用操作符，然后将存储a地址的p赋20.
	printf("%d\n", a);

	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &ch);
	printf("%p\n", pc);
	*pc = 'r';
	printf("%c\n", ch);

	double d = 3.45;
	double* pd = &d;
	
	printf("%p\n", d);
	printf("%p\n", *pd);
	*pd = 4.32;
	printf("%lf\n", d);//lf是double型的输出
	return 0;
}
*/
