#include"chess.h"
void Menu(){
	printf("*************************************\n");
	printf("********欢迎来到三子棋世界***********\n");
	printf("***1.GAME*************2.QUIT*********\n");
	printf("******** 请输入你的选择：************\n");
	printf("*************************************\n");

}
void InitBoard(char board[][COL], int row, int col){
	int i = 0;
	for (; i < col; i++){
		int j = 0;
		for (; j < row; j++){
			board[i][j] = ' ';
		}	
	}
}
void ShowBoard(char board[][COL], int row, int col){
	printf("   | 1 | 2 | 3 |\n");
	int i = 0;
	for (; i < row; i++){
		printf("__________________\n"); 
		printf(" %d | %c | %c | %c \n", i+1,board[i][0], board[i][1],board[i][2]);
	}printf("__________________\n");
}
int PlayerMove(char board[][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("please enter your Pos<x,y>\n");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= 3 && y >= 1 && y <= 3){
		if (board[x - 1][y - 1] != ' '){
		return 2;
		}//表示该处有棋子
		else{//坐标正确
			board[x - 1][y - 1] = BLACK;
			return 0;
		}
	}
	return 1;//输入错误的坐标；
	
}
char JudgeResult(char board[][COL] ,int  row,int col){
	int i = 0;
	for (; i < row; i++){
		if (board[i][0] != ' '&&board[i][0] == board[i][1] && board[i][1] == board[i][2]){
			return board[i][0];
		}
	}
	int j = 0;
	for (; j < col; j++){
		if (board[0][j] != ' '&&board[0][j] == board[1][j] && board[1][j] == board[2][j]){
			return board[0][j];
		}
	}
	if (board[0][0] != ' '&&board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		return board[0][0];
		
	}if (board[0][2] != ' '&&board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[0][2];
	}
	
	for (i = 0; i < 3; i++){
		
		for ( j = 0; j <3; j++){
			if (board[i][j] == ' '){
				return 'N';//检查有坐标为空，继续
			}
		}
	}
	return 'E';//平局
}
void ComputerMove(char board[ROW][COL], int row, int col){
	
	while (1){
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' '){
			board[i][j] = WHITE;
			break;
		}
	}printf("电脑已落棋！\n");
	Sleep(100);
}
void Game(){
	int board[ROW][COL];//二维数组
	InitBoard(board, ROW, COL);//初始化面板
	char judge = 'N';
	 srand((unsigned long)time(NULL));
	void ShowBoard(char board[][COL], int row, int col);//展示面板
	int  player = 0;
	while (1){
		ShowBoard(board, ROW, COL);
		player = PlayerMove(board, ROW, COL);
			if (player==2){
			printf("该处已有棋子！\n");
			continue;
			}
			else if (player == 1){
			printf("输入坐标错误！\n");
			continue;
		}
			else{
				printf("玩家已落棋！\n");
		}
			ShowBoard(board, ROW, COL);
			JudgeResult(board, ROW, COL);
			judge = JudgeResult(board ,ROW,COL);
			if (judge != 'N'){
				break;
			}
			ComputerMove(board, ROW, COL);
			judge = JudgeResult(board, ROW, COL);
			if (judge != 'N'){
				break;
			}
		
	}
		ShowBoard(board, ROW, COL);//result = JudgeResult;
		switch (judge){
		case BLACK:
			printf("恭喜你，玩家获胜！\n");
			break;
		case WHITE:
			printf("真遗憾，你输了！\n");
			break;
		case 'E':
			printf("恭喜你，平局!");
			break;
		}
}