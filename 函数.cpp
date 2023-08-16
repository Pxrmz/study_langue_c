#include <stdio.h>


/*#include<string.h>
int main()
{
	char arr1[] = "sdadfa";
	char arr2[20] = "###########";
	strcpy_s(arr2, arr1);//复制函数，将arr1复制给arr2。
	//string --copy=strcpy
	printf("%s\n", arr2);
	return 0;
}
*/

//memset = memory-set.内存＋设置
/*int main()
{
	char arr[] = "hello pxrmz";
	memset(arr, '#', 5);
	printf("%s", arr);
	return 0;
}*/

//输出两数中的较大值
/*int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
	return 0;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d\n", max);
	 max = get_max(100, 3);
	printf("%d\n", max);
	return 0;
}*/

//交换两个整型变量的值
/*int main()
{
	int a = 1;
	int b = 2;
	int j = 0;
	printf("a=%d b=%d\n", a, b);
		j = a;
		a = b;
		b = j;	
	printf("a=%d b=%d\n", a, b);
	return 0;
}*/


//通过指针实现交换
/*void swap(int* x, int* y)
{
	int k = 0;
	k = *x;
	*x = *y;
	*y = k;
	
}
int main()
{
	int a = 20;
	int b = 30;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}*/

//函数法实现100~200之间的素数
/*int is_prime(int n)
{
	for (int j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
		
	}
		return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}*/

//二分查找  写成函数形式
/*#include<string.h>
int search(int arr[], int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid  + 1;
		}
		else
			return mid;
	}
	return -1;

}
int main()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int re = search(arr, k,sz);
	if (re ==-1)
		printf("找不到");
	else
		printf("找到了");
	return 0;
}*/


//实现函数自增
/*void add(int* p)
{
	(*p)++;//++的优先级高

}
int main()
{
	int num = 0;
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	return 0;

}
*/

//链式嵌套
/*int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//打印字符的个数

	return 0;
}*/

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
}