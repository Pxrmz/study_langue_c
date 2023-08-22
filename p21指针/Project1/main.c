#include<stdio.h>

//指针类型决定了 指针进行解引用操作的时候，能够访问空间的大小。
//int*p；*p 能访问4个字节  char*p；*p只能访问1个字节
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

//指针类型决定了指针走一步走多远
/*int main()
{
	int a = 545;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n",pa);
	printf("%p\n",pa+1);//int类型指针 跳4个字节
	
	printf("%p\n",pc);
	printf("%p\n",pc+1);//char类型，跳1个
	
	return 0;
}*/

/*int main()
{
	int arr[10] = { 1,6,5,9,6,7,8 };
	int* pa = arr;//等价的
	int i = 0;
	printf("%p\n", arr);//首个元素的地址
	printf("%p\n", pa);//首歌元素的地址
	printf("%p\n", &arr);//整个元素的
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[2]);// "%p"表示按照16进制输出数据，不足的 补0
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

//指针的加减法
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


//指针减去指针  是两者之间的元素个数
/*int main()
{
	int arr[9] = { 1,2,3,5,6,8,9,7,42 };
	printf("%d\n", &arr[9] - &arr[5]);
	return 0;
}*/

//利用指针 实现strlen功能
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

//指针和数组
/*int main()
{
	int arr[10] = { "0" };
	//二者的地址相差4
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	//二者的地址相差4
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	//二者的地址相差40，10*4
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//&arr：&数组名，表示整个数组的地址
	//sizeof（数组名），此时也是计算整个数组的大小
	return 0;
}*/

//指针数组
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
