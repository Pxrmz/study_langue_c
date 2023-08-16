#include <stdio.h>
//1000以内的完数
/*int main()
{
	int i = 0;
	int j = 0;
	

	for (i = 1; i <= 1000; i++)
	{
		int sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			printf("%d是完数\n", i);
		}

	}

	return 0;
}*/
//猴子吃桃子
int main()
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= 10; i++)
	{
		j = (j + 1) * 2;
	}
	printf("%d\n", j);
	return 0;
}