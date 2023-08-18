
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
	//打印列 号
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);//打印行号
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
		int x = rand() % row + 1;//产生1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'3'-'0'=3  字符3 - 字符0 = 数字3
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
// 递归函数 去掉周围非雷位置
void spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);//周围地雷的个数(此时是字符的ASCII码值)

	if (count == 0)
	{
		show[x][y] = ' ';
		int i = 0, j = 0;

		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				//连续排除时限制范围在棋盘范围内
				if ((x + i) > 0 && (y + i) > 0 && (x + i < ROWS) && (y + j < COLS) && show[x + i][y + j] == '*')
				{
					spread(mine, show, x + i, y + j);//递归实现周围如果都没地雷连续排除
				}
			}
		}
	}
	else
	{
		show[x][y] = count + '0';//将字符ASCII码值转换为数字从而显示
	}
}

int IsWin(char show[ROWS][COLS], int row, int col)
{
	int num = 0;
	//排除一个地雷时便进行累加
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
		printf("请输入排查雷的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("你被炸死\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//2.不是雷
			{
				spread(mine, show, x, y);//计算周围地雷数量，连续排除无雷的方格
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
		int ret = IsWin(show, row, col);
		if (ret == EASY)
		{
			printf("恭喜你排雷成功\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
	}


}
