#ifndef _CHESS_H_
#include<Windows.h>
#define _CHESS_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
#define ROW 3
#define COL 3
#define BLACK 'o'
#define WHITE 'x'
void InitBoard(char board[][COL], int row, int col);
void Menu();
void Game();
void ComputerMove(board,  row, col);
void ShowBoard(char board[][COL], int row, int col);
char JudgeResult(char board[][COL], int  row, int col);
int PlayerMove(char board[][COL], int row, int col);
#endif