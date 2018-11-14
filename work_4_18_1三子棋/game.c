#define _CRT_SECURE_NO_WARNINGS 1 
#include"game.h"
int chess_full(int rows, int cols, char board[ROWS][COLS])//������������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
			}

		}
	}
	return 0;

}

void disboard(int rows, int cols, char board[ROWS][COLS])//��ӡ����
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf(" %c |  %c |  %c \n", board[i][0], board[i][1], board[i][2]);
		if (i != 2)
			printf("---|----|---\n");

	}
}

void init(int rows, int cols, char board[ROWS][COLS])//���̳�ʼ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
	disboard(ROWS, COLS, board);
}

void playerplay(int rows, int cols, char board[ROWS][COLS])//������
{
	if (chess_full(ROWS, COLS, board) == 0)
	{
		exit(0);
	}
	int line = 1;
	int column = 1;
S:do
{
	
	printf("������������ӵ�λ�ã�");
	scanf_s("%d%d", &line, &column);
	//fflush(stdin);
	setbuf(stdin, NULL);//������뻺����
	if ((line - 1 < 0) || (line - 1 > 2) || (column - 1 < 0) || (column - 1 > 2))
	{
		printf("�Բ��������������Ч��λ��\n");
		goto S;

	}
	while (board[line - 1][column - 1] != ' ')
	{
		if (board[line - 1][column - 1] == 'X' || board[line - 1][column - 1] == 'Y')
		{
			printf("�Բ��������������Ч��λ��\n");
			goto S;
		}

		break;
	}
	board[line - 1][column - 1] = 'X';

} while (board[line - 1][column - 1] == ' ');
{
	disboard(ROWS, COLS, board);
}
}

void pcplay(int rows, int cols, char board[ROWS][COLS])
{
	if (chess_full(ROWS, COLS, board) == 0)
	{
		exit(0);
	}
	printf("����������\n");
	int line = 0;
	int column = 0;
	//int count = 0;
	while (1)
	{
		int line = rand() % 3;
		int column = rand() % 3;
		if (board[line][column] == ' ')
		{
			board[line][column] = 'Y';
			break;
		}
	}
	disboard(ROWS, COLS, board);
}

int judge(int rows, int cols, char board[ROWS][COLS])
{
	int i = 0;
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
	{
		if (board[1][1] == 'X')
		{
			printf("���Ӯ��\n");
			return 1;
		}
		if (board[1][1] == 'Y')
		{
			printf("�Է�Ӯ��\n");
			return 1;
		}
	}
	if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]))
	{
		if (board[1][1] == 'X')
		{
			printf("���Ӯ��\n");
			return 1;
		}
		if (board[1][1] == 'Y')
		{
			printf("�Է�Ӯ��\n");
			return 1;
		}
	}
	for (i = 0; i < 3; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
		{
			if (board[i][1] == 'X')
			{
				printf("���Ӯ��\n");
				return 1;
			}
			if (board[i][1] == 'Y')
			{
				printf("�Է�Ӯ��\n");
				return 1;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]))
		{
			if (board[1][i] == 'X')
			{
				printf("���Ӯ��\n");
				return 1;
			}
			if (board[1][i] == 'Y')
			{
				printf("�Է�Ӯ��\n");
				return 1;
			}
		}
	}
}

void game(int rows, int cols, char board[ROWS][COLS])
{
	int i = 0;
	int ret = 0;
	init(ROWS, COLS, board);
	while ((chess_full(ROWS, COLS, board) == 1))
	{
		playerplay(ROWS, COLS, board);
		ret = judge(ROWS, COLS, board);
		if (ret == 1)
		{
			break;
		}
		if (ret == 0)
		{
			printf("ƽ��\n");
		}
		pcplay(ROWS, COLS, board);
		ret = judge(ROWS, COLS, board);
		if (ret == 1)
		{
			break;
		}
		if (ret == 0)
		{
			printf("ƽ��\n");
		}
	}
}