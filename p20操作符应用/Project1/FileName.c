#include<stdio.h>


//sizeof计算所占空间大小，int形4位 char类型1
void fax1(int arr[])
{
	printf("%d\n",sizeof(arr));
}
void fax2(char ch[])
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n",sizeof(arr));//计算整个数组的大小，10个元素 每个元素4个字节

	printf("%d\n", sizeof(ch));//10*1
	fax1(arr);//传过去的是首元素地址，只有第一位传过去
	fax2(ch);
	return 0;
}

/*int main()
{
	int i = 0, a =1 , b = 2, c = 3, d = 4;
	//i = a++ && --b && d++;
	i = a++ || ++b || d++;
	printf("%d\n",i);
	printf("a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
	return 0;
}
*/

//结构体
/*struct stu
{
	char name[20];
	int age;
	char id[20];
	
};
int main()
{
	int a = 10;
	struct stu s1 = {"张三",20,"20909032"};
	struct stu* ps = &s1;
	printf("%s\n",ps->name);//打印指针变量ps中name的内容
	printf("%s\n", (*ps).name);
	//(*ps)相当于s1，s1.name就是去s1中的张三
	printf("%d\n",ps->age);
	return 0;
}*/


//整形提升
/*int mian()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n",c);
	//以补码形式存，以原码形式打印
	//补码-1=反码，反码符号位不变其余取反得原码
	return 0;
}
*/

