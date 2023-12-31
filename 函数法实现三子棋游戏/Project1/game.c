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
			//打印一行数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		
		//打印分割行
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
	printf("玩家走：");
	while (1)
	{
		printf("请输入坐标：");
		scanf_s("%d%d", &x, &y);
		//判断x，y的合法性
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}
	
}

void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
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

//返回0 表示没满、
//返回1 表示满了
int Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}
char Winer(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行是否一样
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2]&& board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//判断三列是否一样
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[0][i];
		}
	}
	//两对角线
	if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ')
		return board[0][0];
	//判断是否平局
	if (Full(board, ROW, COL) == 1)
	{
		return 'Q';
	}
	return 'C';
}