#include"chess.h"
int main(){
	int select = 0;
START:
	Menu();
	scanf("%d", &select);
	switch (select){
	case 1:
		Game();
		printf("����һ�ΰɣ�\n");
		goto START;
	case 2:
		break;
	default:
		printf("�������\n");
		goto START;
	}
	system("pause");
	return 0;
}