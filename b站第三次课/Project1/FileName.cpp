#include<stdio.h>

//ԭ�� ���� ����
/*int main()
{
	int a = 0;
	int b = ~a;
	//���룺11111...11111�������һ�õ�����
	//���룺11111...11110���������һλȡ���õ�ԭ��
	//ԭ�룺10000...00001��Դ���Ӧ�ľ���-1.
	printf("%d\n", b);
	return 0;

}*/

//ǰ��++
/*int main()
{
	int a = 90;
	int b = ++a;
	printf("a=%d  b=%d\n", a, b);
	//����++��a++������ʹ�ã���++
	//ǰ��++(++a)����++����ʹ��
	return 0;
}
*/

//ǿ������ת��( )
/*int main()
{
	int a = (int)7.65;//double����ת��int��
	printf("%d\n", a);
	return 0;
*/

//������������Ҳ����Ŀ������
/*int main()
{
	int a = 12;
	int b = 90;
	int max = 0;
	max = (a > b ? a: b);//a>b���Ǿ����a�����Ǿ����b
	printf("%d\n", max);
	return 0;
}*/

//�����ض���
/*int main()
{
	typedef unsigned int u_int;//��unsigned int������Ϊu_int.
	unsigned int s = 30;
	u_int k = 30;
	printf("%d\n", k);
	return 0;
}*/

//static���ξֲ����� ʹ�þֲ������������ڱ䳤
//static���ξֲ����� �ı���ȫ�ֱ�����������
/*void text()
{
	static int a = 1;
	a++;
	printf("%d\n", a);//��static�������23456
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
//extern �����ⲿ����������
/*extern int Add(int, int);
int main()
{
	int a = 12;
	int b = 34;
	int sum = Add(a, b);
	printf("%d\n", sum);
}
*/

//ȡ��ַ
/*int main()
{
	int a = 34;
	int* p = &a;//����ָ�����p���洢a�ĵ�ַ��int*p��
	printf("%p\n", &a);//"%p\n"�����������ַ��
	printf("%p\n", p);
	*p = 20;//*p�ǽ����ò�������Ȼ�󽫴洢a��ַ��p��20.
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
	printf("%lf\n", d);//lf��double�͵����
	return 0;
}
*/
