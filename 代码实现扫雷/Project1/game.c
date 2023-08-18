
#define _CRT_SECURE_NO_WARNINGS l
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�� ��
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY;
	while (count)
	{
		int x = rand() % row + 1;//����1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'3'-'0'=3  �ַ�3 - �ַ�0 = ����3
int get_mine_count(char mine[ROWS][COLS], int x,int  y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
	
}
// �ݹ麯�� ȥ����Χ����λ��
void spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);//��Χ���׵ĸ���(��ʱ���ַ���ASCII��ֵ)

	if (count == 0)
	{
		show[x][y] = ' ';
		int i = 0, j = 0;

		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				//�����ų�ʱ���Ʒ�Χ�����̷�Χ��
				if ((x + i) > 0 && (y + i) > 0 && (x + i < ROWS) && (y + j < COLS) && show[x + i][y + j] == '*')
				{
					spread(mine, show, x + i, y + j);//�ݹ�ʵ����Χ�����û���������ų�
				}
			}
		}
	}
	else
	{
		show[x][y] = count + '0';//���ַ�ASCII��ֵת��Ϊ���ִӶ���ʾ
	}
}

int IsWin(char show[ROWS][COLS], int row, int col)
{
	int num = 0;
	//�ų�һ������ʱ������ۼ�
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				num++;
		}
	}
	return num;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY)
	{
		printf("�������Ų��׵����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("�㱻ը��\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//2.������
			{
				spread(mine, show, x, y);//������Χ���������������ų����׵ķ���
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
		int ret = IsWin(show, row, col);
		if (ret == EASY)
		{
			printf("��ϲ�����׳ɹ�\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}


}
