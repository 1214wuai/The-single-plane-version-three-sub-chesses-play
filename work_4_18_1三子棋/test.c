#define _CRT_SECURE_NO_WARNINGS 1  
#include"game.h"
void menu()
{
	printf("*****************************************\n");
	printf("************��ӭ������������Ϸ***********\n");
	printf("**********1.��ʼ��Ϸ  0.�˳���Ϸ*********\n");
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
	setbuf(stdin, NULL);//������뻺����
	switch (input)
	{
	case 1:
		game(ROWS, COLS, board);
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("�������");
		break;
	}
	
	system("pause");
	return 0;
}