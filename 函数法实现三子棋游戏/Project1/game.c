#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡһ������
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�");
	while (1)
	{
		printf("���������꣺");
		scanf_s("%d%d", &x, &y);
		//�ж�x��y�ĺϷ���
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}
	
}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//����0 ��ʾû����
//����1 ��ʾ����
int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//û��
		}
	}
	return 1;//����
}
char Winer(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж������Ƿ�һ��
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2]&& board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//�ж������Ƿ�һ��
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	//���Խ���
	if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
		return board[0][0];
	//�ж��Ƿ�ƽ��
	if (Full(board, ROW, COL) == 1)
	{
		return 'Q';
	}
	return 'C';
}