#include"chess.h"
void Menu(){
	printf("*************************************\n");
	printf("********��ӭ��������������***********\n");
	printf("***1.GAME*************2.QUIT*********\n");
	printf("******** ���������ѡ��************\n");
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
		}//��ʾ�ô�������
		else{//������ȷ
			board[x - 1][y - 1] = BLACK;
			return 0;
		}
	}
	return 1;//�����������ꣻ
	
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
				return 'N';//���������Ϊ�գ�����
			}
		}
	}
	return 'E';//ƽ��
}
void ComputerMove(char board[ROW][COL], int row, int col){
	
	while (1){
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' '){
			board[i][j] = WHITE;
			break;
		}
	}printf("���������壡\n");
	Sleep(100);
}
void Game(){
	int board[ROW][COL];//��ά����
	InitBoard(board, ROW, COL);//��ʼ�����
	char judge = 'N';
	 srand((unsigned long)time(NULL));
	void ShowBoard(char board[][COL], int row, int col);//չʾ���
	int  player = 0;
	while (1){
		ShowBoard(board, ROW, COL);
		player = PlayerMove(board, ROW, COL);
			if (player==2){
			printf("�ô��������ӣ�\n");
			continue;
			}
			else if (player == 1){
			printf("�����������\n");
			continue;
		}
			else{
				printf("��������壡\n");
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
			printf("��ϲ�㣬��һ�ʤ��\n");
			break;
		case WHITE:
			printf("���ź��������ˣ�\n");
			break;
		case 'E':
			printf("��ϲ�㣬ƽ��!");
			break;
		}
}