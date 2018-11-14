#define _CRT_SECURE_NO_WARNINGS 1  
#include"game.h"
void menu()
{
	printf("*****************************************\n");
	printf("************欢迎来到三子棋游戏***********\n");
	printf("**********1.开始游戏  0.退出游戏*********\n");
	printf("*****************************************\n");
}



int main()
{
	menu(); 
	int input = 0;
	int rows = 0;
	int cols = 0;
	
	char board[ROWS][COLS];/*= { 0 };*/
	scanf_s("%d", &input);
	setbuf(stdin, NULL);//清空输入缓冲区
	switch (input)
	{
	case 1:
		game(ROWS, COLS, board);
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	
	system("pause");
	return 0;
}