#include<stdio.h>

//ָ�����;����� ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С��
//int*p��*p �ܷ���4���ֽ�  char*p��*pֻ�ܷ���1���ֽ�
/*int main()
{
	int a = 0;
	int* pa = &a;
	*pa = 0;
	printf("%p\n",pa);
	char* pc = &a;
	*pc = 0;
	printf("%p\n", pc);
	return 0;
}
*/

//ָ�����;�����ָ����һ���߶�Զ
/*int main()
{
	int a = 545;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n",pa);
	printf("%p\n",pa+1);//int����ָ�� ��4���ֽ�
	
	printf("%p\n",pc);
	printf("%p\n",pc+1);//char���ͣ���1��
	
	return 0;
}*/

/*int main()
{
	int arr[10] = { 1,6,5,9,6,7,8 };
	int* pa = arr;//�ȼ۵�
	int i = 0;
	printf("%p\n", arr);//�׸�Ԫ�صĵ�ַ
	printf("%p\n", pa);//�׸�Ԫ�صĵ�ַ
	printf("%p\n", &arr);//����Ԫ�ص�
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[2]);// "%p"��ʾ����16����������ݣ������ ��0
	printf("%p\n", *arr);
	for (i = 0; i < 10; i++)
	{
		*(pa + i) = 1;
	}
	return 0;
}
*/

/*int main()
{
	int a[10] = { 0 };
	int b = 3;
	int* pb = &b;
	printf("%d\n", *pb);
	int* p = a;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}
	return 0;
}*/

//ָ��ļӼ���
/*int main()
{
	int arr[9] = { 1,2,3,5,6,8,9,7,42 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (p = &arr; p < &arr[sz];)
	{
		printf("%d ", *p);
		p = p + 1;
	}
	return 0;
}*/


//ָ���ȥָ��  ������֮���Ԫ�ظ���
/*int main()
{
	int arr[9] = { 1,2,3,5,6,8,9,7,42 };
	printf("%d\n", &arr[9] - &arr[5]);
	return 0;
}*/

//����ָ�� ʵ��strlen����
/*int my_strlen(char* str)
{
	int count = 0;
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "bidsaidjasidje";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
*/

//ָ�������
/*int main()
{
	int arr[10] = { "0" };
	//���ߵĵ�ַ���4
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	//���ߵĵ�ַ���4
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	//���ߵĵ�ַ���40��10*4
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//&arr��&����������ʾ��������ĵ�ַ
	//sizeof��������������ʱҲ�Ǽ�����������Ĵ�С
	return 0;
}*/

//ָ������
int main()
{
	int a[] = {12,62,10};
	int b[] = {23,5,6};
	int c[] = {66,22,234};
	int* arr[3] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for(j = 0;j < 3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
