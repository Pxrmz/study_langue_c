#include<stdio.h>


//����ʧ��
/*int main()
{
	char ch = 0;
	char re = 0;
	char  password[20] = {0};
	printf("���������룺");
	scanf_s("%s", password);
	while ((ch = getchar())!= '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y��N��");
	re = getchar();
	if (re == 'Y')
		printf("�ɹ�\n");
	else
		printf("ʧ��\n");
	return 0;
}
*/

//forѭ��
/*int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}*/

/*int main()
{	
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		//ע��k=0��˼�Ǽ٣�����������ѭ����
	{
		k++;
	}
	return 0;
}*/
//do whileѭ��
/*int main()
{
	int i = 0;
	
	do
	{
		i++;
		printf("%d\n", i);
	}	
	while (i < 10);
	return 0;
}*/

/*int main()
{
	int i = 0;
	int s = 1;
	while (1)
	{
		i++;
		s = s * i;
	}
	return 0;
}*/


//����n��  n�����׳����
/*int main()
{
	int a, i = 1;
	int s = 1;
	int sum = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (a = 1; a <= n; a++)
	{
		s = s * a;
		sum = sum + s;
	}
	printf("%d\n", sum);

	return 0;
}
*/

//���ֲ��ҷ���
/*int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int left = 0;
	int a = sizeof(arr) / sizeof(arr[0]);
	int right = a - 1;
	
	while (left <= right)
	{
			int mid = (left + right) / 2;
			if (arr[mid] > k)
			{
				right = mid - 1;
			}
			else if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				printf("�ҵ���,�±��ǣ�%d\n",mid );
				break;
			}
				
	}	
		if (left > right)
			printf("û�ҵ�\n");
	return 0;
}*/

//�������м�仯��ֵ
/*#include "string.h"
#include "windows.h"
#include "stdlib.h"
int main()
{
	char arr1[] = "Lovemengfan";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr1) - 1;
	//int right=sizeof(arr1)/sizeof(arr[0])-2;���������һ��
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		//��Ϣһ��
		Sleep(300);//�ӳٺ��� ��Ҫ��ͷ�ļ�
		system("cls");//��������
	}
	printf("%s\n", arr2);
	return 0;
}*/


//�����������룬��ȷ��ʾ��¼�ɹ������ζ����˳�����
//sb���������⣬����û��
/*#include "string.h"
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf_s("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf(" %d error\n", i + 1);
	}
	if (i == 3)
		printf("���ζ�����\n");

	return 0;
}*/


