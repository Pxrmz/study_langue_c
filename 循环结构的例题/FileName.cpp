#include<stdio.h>

//���������ֵ����Լ��
/*int main()
{
	int m, n, t,r;
	printf("����ĵ�һ����=");
	scanf_s("%d", &m);
	printf("\n����ĵڶ�����=");
	scanf_s("%d", &n);//ȡ��ַһ����Ҫ��\n��
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
		printf("���Լ��=%d\n", m);

	return 0;
}*/

//��д�����ӡ������ͼ��
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


//�ټ�����
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

//��break�ĺ�����ֻ��������ǰ��ѭ�����
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

//û��break�����Ǹ�����ʵ�ֵĹ���һ��
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

//���100~200֮�䲻�ܱ�3��7ͬʱ��������
/*int main()
{
	int i,j,n=0;
	for (i = 100; i < 200; i++)
	{
		for (j = 1; j < 3; j++)
		{
			if (i % 2 == 0 || i % 4 == 0)//�޸�֮����
			{
				continue;//������ǰѭ����䣬��ת����һ��ѭ��
				//continue����� printf����shuhu�����Ͳ���ִ��
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
