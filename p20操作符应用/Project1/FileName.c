#include<stdio.h>


//sizeof������ռ�ռ��С��int��4λ char����1
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
	printf("%d\n",sizeof(arr));//������������Ĵ�С��10��Ԫ�� ÿ��Ԫ��4���ֽ�

	printf("%d\n", sizeof(ch));//10*1
	fax1(arr);//����ȥ������Ԫ�ص�ַ��ֻ�е�һλ����ȥ
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

//�ṹ��
/*struct stu
{
	char name[20];
	int age;
	char id[20];
	
};
int main()
{
	int a = 10;
	struct stu s1 = {"����",20,"20909032"};
	struct stu* ps = &s1;
	printf("%s\n",ps->name);//��ӡָ�����ps��name������
	printf("%s\n", (*ps).name);
	//(*ps)�൱��s1��s1.name����ȥs1�е�����
	printf("%d\n",ps->age);
	return 0;
}*/


//��������
/*int mian()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n",c);
	//�Բ�����ʽ�棬��ԭ����ʽ��ӡ
	//����-1=���룬�������λ��������ȡ����ԭ��
	return 0;
}
*/

