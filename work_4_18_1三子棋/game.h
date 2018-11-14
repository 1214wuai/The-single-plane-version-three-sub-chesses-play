//< / pre><pre name = "code" class = "objc">
//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>  
#include<malloc.h>  
#include<time.h>  
#include<stdlib.h>  
#define ROWS 3
#define COLS 3
int chess_full(int rows, int cols, char board[ROWS][COLS]);//棋盘判满函数  
void init(int rows, int cols, char board[ROWS][COLS]);//棋盘初试化函数  
void disboard(int rows, int cols, char board[ROWS][COLS]);//打印棋盘函数  
void playerplay(int rows, int cols, char board[ROWS][COLS]);//人下棋函数  
void pcplay(int rows, int cols, char board[ROWS][COLS]);//电脑下棋函数  
int judge(int rows, int cols, char board[ROWS][COLS]);//评判胜负函数  
void game(int rows, int cols, char board[ROWS][COLS]);//游戏函数  
void menu();//打印菜单函数  
