#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*int main()
{
	char arr[] = "adadada";
	char* pc = arr;
	printf("%s\n", arr);
	//printf("%s\n", &arr);
	printf("%s\n", pc);
	printf("%d\n", *pc);
	return 0;
}*/


//ָ�����飬�����飬�������ָ�������
/*int main()
{
	int arr[10] = { 0 };//��������
	char arr2[5] = { 0 };//�ַ�����
	int* pa[4];//�������ָ�������
	char* pc[5];//����ַ�ָ�������
	return 0;
}
*/

//ָ�������Ӧ��
/*int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 9,2,7,4,5 };
	int arr3[] = { 12,2,3,46,5 };
	int* parr[] = { arr1,arr2,arr3 };//ȡ������������׵�ַ
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(parr[i]+j));
		}
		printf("\n");//����
	}
	return 0;
}*/


//����ָ��--��ָ�������ָ��--�������ĵ�ַ
int main()
{
	int* p = NULL;//p������ָ��--ָ�����͵�ָ��--���Դ�����͵ĵ�ַ
	char* pc = NULL;//pc���ַ�ָ��--ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
	//
	int arr[10] = { 1,2,3,6,5,4,9,7,8,9 };
	int(*pv)[10] = &arr;//pv������ָ�룬�������ĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*(*(pv)+i));
	}
	
	return 0;
}

//��д��ʽ
/*int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;

	int arr2[30] = { 0 };
	int(*pv)[30] = &arr2;
	return 0;
}
*/


//����ָ���ڶ�ά�����е�Ӧ��
/*void print(int(*p)[3], int x, int y)//������ָ�����ʽ
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { {1,2,3},{5,6,9},{4,9,8} };
	print(arr, 3, 3);
	return 0;
}*/

/*int main()
{
	int arr[10] = { 1,2,3,6,5,4,7,8,9,12 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
		printf("%d ", *(arr + i));
		//ָ��p��ŵ���arr���׵�ַ��p�ȼ���&arr���׵�ַ������*p�ȼ���*arr
		printf("%d ", arr[i]);
		//arr[i]==*(arr+i)==*(p + i)==p[i]
	}
	return 0;
}*/




/*
	int arr[5];//arr��һ����5��Ԫ�ص���������
	int* p1[10];//p1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*�͡�
	int(*p2)[10];//p2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int
	int(*p3[10])[5];//p3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int��
*/