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


//指针数组，是数组，用来存放指针的数组
/*int main()
{
	int arr[10] = { 0 };//整型数组
	char arr2[5] = { 0 };//字符数组
	int* pa[4];//存放整型指针的数组
	char* pc[5];//存放字符指针的数组
	return 0;
}
*/

//指针数组的应用
/*int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 9,2,7,4,5 };
	int arr3[] = { 12,2,3,46,5 };
	int* parr[] = { arr1,arr2,arr3 };//取三个子数组的首地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(parr[i]+j));
		}
		printf("\n");//换行
	}
	return 0;
}*/


//数组指针--是指向数组的指针--存放数组的地址
int main()
{
	int* p = NULL;//p是整型指针--指向整型的指针--可以存放整型的地址
	char* pc = NULL;//pc是字符指针--指向字符的指针--可以存放字符的地址
	//
	int arr[10] = { 1,2,3,6,5,4,9,7,8,9 };
	int(*pv)[10] = &arr;//pv是数组指针，存放数组的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*(*(pv)+i));
	}
	
	return 0;
}

//书写格式
/*int main()
{
	char* arr[5];
	char* (*pa)[5] = &arr;

	int arr2[30] = { 0 };
	int(*pv)[30] = &arr2;
	return 0;
}
*/


//数组指针在二维数组中的应用
/*void print(int(*p)[3], int x, int y)//参数是指针的形式
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
		//指针p存放的是arr的首地址，p等价于&arr的首地址，所以*p等价于*arr
		printf("%d ", arr[i]);
		//arr[i]==*(arr+i)==*(p + i)==p[i]
	}
	return 0;
}*/




/*
	int arr[5];//arr是一个有5个元素的整型数组
	int* p1[10];//p1是一个数组，数组有10个元素，每个元素的类型是int*型。
	int(*p2)[10];//p2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int
	int(*p3[10])[5];//p3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int型
*/