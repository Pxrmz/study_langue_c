#include<stdio.h>
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("****1.strat   0.exit****\n");
	printf("************************\n");
}

//游戏算法的实现
void game()
{
	int ret = 0;
	//定义数组存放棋盘信息
	char board[ROW][COL] = { 0 };

	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	
	//下棋
	while (1)
	{
		//玩家下
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = Winer(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢了
		ret = Winer(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
}


void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	text();
	return 0;
}