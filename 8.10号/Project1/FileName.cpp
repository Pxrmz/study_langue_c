#include <stdio.h>

/*void  main()
{
	int year;
	printf("�������ݣ�");
	scanf_s("%d", &year);//ע��û��\n
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

		printf("%d������\n", year);
	else
		printf("%d��������\n", year);
}*/

/*int main()
{
	int a = 3;
	int b = 44;
	int m = a < b ? a : b;
	printf("%d\n", m);
	return 0;
}*/

//if  else  ���
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

//���if else��ƥ���ϵ
/*int main()
{
	int a = 1;
	int b = 4;
	if (a == 0)
		if (b == 1)
			printf("ss");
	else//else ����������Ǹ�ifƥ�䣬�����ǿ���ʽ
		printf("gg");
	return 0;
}
int main()
{
	int a = 1;
	int b = 4;
	if (a == 0)//��һ��{}������ʹ��else����Ҫ��ifƥ��
	{
		if (b == 1)
		printf("ss");
	}
	else
		printf("gg");
	return 0;
}*/

//�ж�һ�����ǲ�������
/*int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 1)
		printf("%d�ǻ���\n", a);
	else
		printf("%d���ǻ���\n", a);
	return 0;
}*/

//���1-100֮�������
/*int main()
{
	int a=0;
	while (a <= 100)
	{
		if (a % 2 == 1)
			printf("%d�ǻ���\n", a);
		else
			printf("%d���ǻ���\n", a);
		a++;
	}	
	return 0;
}*/

//switch��䣬break�ǽ����ǽ�����־
/*int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)//��������֣����������ͱ��ʽ��������Ľ�ȥ������break�ͽ���
	{
	case 1:printf("����һ"); break;//case�����ͳ������ʽ�����;break;
	case 2:printf("����2"); break;
	case 3:printf("����3"); break;
	case 4:printf("����4"); break;
	case 5:printf("����5"); break;
	case 6:printf("����6"); break;
	case 7:printf("����7"); break;
	case 8:printf("����8"); break;
	default:printf("����"); break;
	}
	return 0;
}*/


//switch������ҵ
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

//continue���ĺ�����
/*int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 6)
			continue;//��ִ�к���Ĵ��룬ֱ����ת��ǰ��while����жϲ���
		printf("%d\n", i);
		i++;
	}
	return 0;
}
*/

/*int main()
{
	int ch = getchar();//getchar  ��ȡһ���ַ�����˼
	printf("%c\n", ch);
	putchar(ch);//����ַ�����˼���ȼ���printf����%d\n����
	
	return 0;

	//
	int main()
	{
		int ch = 0;
		while ((ch = getchar()) != EOF)//ctrl��z��ʾ�������
		{
			putchar(ch);
		}
		return 0;
	}
	
}*/



