#include"chess.h"
int main(){
	int select = 0;
START:
	Menu();
	scanf("%d", &select);
	switch (select){
	case 1:
		Game();
		printf("再玩一次吧！\n");
		goto START;
	case 2:
		break;
	default:
		printf("输入错误\n");
		goto START;
	}
	system("pause");
	return 0;
}