//< / pre><pre name = "code" class = "objc">
//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>  
#include<malloc.h>  
#include<time.h>  
#include<stdlib.h>  
#define ROWS 3
#define COLS 3
int chess_full(int rows, int cols, char board[ROWS][COLS]);//������������  
void init(int rows, int cols, char board[ROWS][COLS]);//���̳��Ի�����  
void disboard(int rows, int cols, char board[ROWS][COLS]);//��ӡ���̺���  
void playerplay(int rows, int cols, char board[ROWS][COLS]);//�����庯��  
void pcplay(int rows, int cols, char board[ROWS][COLS]);//�������庯��  
int judge(int rows, int cols, char board[ROWS][COLS]);//����ʤ������  
void game(int rows, int cols, char board[ROWS][COLS]);//��Ϸ����  
void menu();//��ӡ�˵�����  
