#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int judge(){
	char x = 'c';
	while (x=='c'&&x=='d'&&x!='d'){
		return 1;
	}
	x = 'd';
	while (x=='d'&&x!='d'){
		return 2;
	}
	x = 'c';
	while (x=='c'){
		return 3;
	}
	x = 'd';
	while (x == 'c'&&x == 'd')
		return 4;
}
int main(){
	int jud = judge();
	switch (jud)
	{
	case 1:
		printf("甲说谎!是凶手\n");
		break;
	case 2:
		printf("乙说谎！是凶手\n");
		break;
	case 3:
		printf("丙说谎!是凶手\n");
		break;
	default:
		printf("丁是凶手\n");
		break;
	}
	system("pause");
	return 0;
}