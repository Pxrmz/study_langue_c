#include<stdio.h>


//运行失败
/*int main()
{
	char ch = 0;
	char re = 0;
	char  password[20] = {0};
	printf("请输入密码：");
	scanf_s("%s", password);
	while ((ch = getchar())!= '\n')
	{
		;
	}
	printf("请确认（Y、N）");
	re = getchar();
	if (re == 'Y')
		printf("成功\n");
	else
		printf("失败\n");
	return 0;
}
*/

//for循环
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
		//注意k=0意思是假，根本不进入循环体
	{
		k++;
	}
	return 0;
}*/
//do while循环
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


//输入n的  n个数阶乘相加
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

//二分查找方法
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
				printf("找到了,下标是：%d\n",mid );
				break;
			}
				
	}	
		if (left > right)
			printf("没找到\n");
	return 0;
}*/

//两端向中间变化赋值
/*#include "string.h"
#include "windows.h"
#include "stdlib.h"
int main()
{
	char arr1[] = "Lovemengfan";
	char arr2[] = "###########";
	int left = 0;
	int right = strlen(arr1) - 1;
	//int right=sizeof(arr1)/sizeof(arr[0])-2;上面与这个一样
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		//休息一秒
		Sleep(300);//延迟函数 需要加头文件
		system("cls");//清屏函数
	}
	printf("%s\n", arr2);
	return 0;
}*/


//输入三次密码，正确显示登录成功，三次都错，退出程序
//sb编译器问题，代码没错
/*#include "string.h"
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf_s("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
			printf(" %d error\n", i + 1);
	}
	if (i == 3)
		printf("三次都错误\n");

	return 0;
}*/


