#include <stdio.h>

//ö�ٳ���
/*enum SEX
{
	man,
	woman,
	da��
};
int main()
{
	printf("%d\n", man);
	printf("%d\n", woman);

	return 0;
}
*/


//����ı�ʶ������
/*#define Pi 3.1456565654
int main()
{
	printf("%f\n", Pi);
	return 0;

}*/

//const���εĳ�����
/*int main()
{
	const int i = 80;
	printf("%d\n", i);
	i=77;//����Ϊ��������i�Ͳ��ܸ�ֵ��
	printf("%d\n", i);
	return 0;

}*/



//����
/*int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c',0 };//��β��0or '0'���ַ����Ľ�����־����ֻ�ǽ�����־���������ַ�������
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}	
*/

//�����ַ����ĳ���
/*#include <string.h>
int main()
{
	char arr1[] = "adasf";
	char arr2[] = { 'a', 'd', 'a', 's', 'f' };
	printf("%d\n", strlen(arr1));//strlen-�����ַ����ĳ��ȣ���Ҫ��ͷ�ļ�#include <string.h>
	printf("%d\n", strlen(arr2));
	return 0;
}*/

//ת���ַ�,����\����Ӧ�ķ���
/*int main()
{
	printf("%c\n", '\'');// \'�ͽ���ת���һ����ͨ�ġ�
	printf("%s\n", "\"");
	printf("%d\n", '0');//��ӡ�ַ�0��Ӧ��ʮ������
	printf("%c\n", '\x61');//��16���Ƶ�61��ת���ʮ��������Ȼ���ʮ��������Ӧ��ASCII��ֵ
	printf("%c\n", '\32');//32��Ϊ�˽��ƴ�����Ǹ�ʮ��������Ӧ��ASCII ��ֵ
	return 0;

}
*/

//����
/*int main()
{
	int arr[] = {1,2,3,4,8,41,9,6,};//����һ�������ô����������
	int i = 0;
	while (i < 8)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}*/

//λ����
/*��λ�루&������0��0��ͬ1��1
  
  ��λ��|������1��1��ͬ0��0
  ��λ���^��:��Ӧ��ͬ��0����Ӧ��ͬ��1
  */

//sizeof�Ĺ���
/*int main()
{
	int i = 7;
	printf("%d\n", sizeof(i));//sizeof������Ǳ���or������ռ�Ŀռ�Ĵ�С����λ���ֽ�
	return 0;
}*/

/*int main()
{
	int arr[62] = {1};
	int i = 0;
	printf("%d\n", sizeof(arr));//sizeof������Ǳ���or������ռ�Ŀռ�Ĵ�С����λ���ֽ�
	i = sizeof(arr) / sizeof(arr[0]);//��������ĸ���
	printf("%d\n", i);
	return 0;
}*/
