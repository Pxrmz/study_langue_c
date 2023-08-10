#include <stdio.h>

//枚举常量
/*enum SEX
{
	man,
	woman,
	da，
};
int main()
{
	printf("%d\n", man);
	printf("%d\n", woman);

	return 0;
}
*/


//定义的标识符常量
/*#define Pi 3.1456565654
int main()
{
	printf("%f\n", Pi);
	return 0;

}*/

//const修饰的常变量
/*int main()
{
	const int i = 80;
	printf("%d\n", i);
	i=77;//定义为常变量后，i就不能赋值了
	printf("%d\n", i);
	return 0;

}*/



//数组
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c',0 };//结尾的0or '0'是字符串的结束标志，它只是结束标志，不算做字符串内容
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}	
*/

//计算字符串的长度
/*#include <string.h>
int main()
{
	char arr1[] = "adasf";
	char arr2[] = { 'a', 'd', 'a', 's', 'f' };
	printf("%d\n", strlen(arr1));//strlen-计算字符串的长度，需要加头文件#include <string.h>
	printf("%d\n", strlen(arr2));
	return 0;
}*/

//转义字符,利用\加相应的符号
/*int main()
{
	printf("%c\n", '\'');// \'就将‘转义成一个普通的’
	printf("%s\n", "\"");
	printf("%d\n", '0');//打印字符0对应的十进制数
	printf("%c\n", '\x61');//将16进制的61，转变成十进制数，然后该十进制数对应的ASCII的值
	printf("%c\n", '\32');//32作为八进制代表的那个十进制数对应的ASCII 码值
	return 0;

}
*/

//数组
/*int main()
{
	int arr[] = {1,2,3,4,8,41,9,6,};//定义一个存放这么多数的数组
	int i = 0;
	while (i < 8)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}*/

//位操作
/*按位与（&）：有0则0，同1则1
  
  按位或（|）：有1则1，同0则0
  按位异或（^）:对应相同则0，对应不同则1
  */

//sizeof的功能
/*int main()
{
	int i = 7;
	printf("%d\n", sizeof(i));//sizeof计算的是变量or类型所占的空间的大小，单位是字节
	return 0;
}*/

/*int main()
{
	int arr[62] = {1};
	int i = 0;
	printf("%d\n", sizeof(arr));//sizeof计算的是变量or类型所占的空间的大小，单位是字节
	i = sizeof(arr) / sizeof(arr[0]);//计算数组的个数
	printf("%d\n", i);
	return 0;
}*/
