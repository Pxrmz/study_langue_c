#include<stdio.h>
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("****1.strat   0.exit****\n");
	printf("************************\n");
}

//��Ϸ�㷨��ʵ��
void game()
{
	int ret = 0;
	//����������������Ϣ
	char board[ROW][COL] = { 0 };

	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	
	//����
	while (1)
	{
		//�����
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = Winer(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ��
		ret = Winer(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
}


void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	text();
	return 0;
}