#include<stdio.h>
//�ṹ��
/*struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;
};
int main()
{
	char arr[] = "hello px\n";
	struct T t = { "hehe",{100,'w',"hello mf",3.12},arr};
	printf("%s\n",t.ch);
	printf("%d\n", t.s.a);
	printf("%s\n", t.s.arr);
	printf("%lf\n", t.s.d);
	printf("%s\n", t.pc);
	return 0;
}*/


typedef struct stu//��typedef  ���ӵ�stu�������������������
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
}stu;


void print1(stu temp)
{
	printf("name:%s\n",temp.name);
	printf("tele:%s\n", temp.tele);
	printf("age:%d\n", temp.age);
	printf("sex:%s\n", temp.sex);
}

void print2(stu* temp)
{
	printf("name:%s\n", temp->name);
	printf("tele:%s\n", temp->tele);
	printf("age:%d\n", temp->age);
	printf("sex:%s\n", temp->sex);
}

int main()
{
	stu s = { "����",49,"qweqweqw","�" };
	//��ӡ�ṹ�庯�������ַ�ʽ
	print1(s);
	print2(&s);
	return 0;
}