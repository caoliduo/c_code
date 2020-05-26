#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
void Menu(){
	printf("**********************欢迎进入游戏！**********************\n");
	printf("**********************请输入你的选择:*********************\n");
	printf("********1.GAME********************2.QUIT****************\n");
	printf("********************************************************\n");
}
void Game(){
	printf("*****游戏规则：电脑随机生成一个0-100的数字，你来猜猜这个数字*****\n");
	printf("你有六次机会哦！\n");
	srand((unsigned int)time(NULL));
	int x=0,i=6;
	int data = rand() % 100 + 1;//生成了【1-100】间的任意数字。
	while (i != 0){
		printf("输入你猜的答案：\n");
		scanf("%d", &x);
	if (x > data){
		printf("猜大了！\n");
	}
	 else if (x < data){
		printf("猜小了！\n");
	 }
	 else{
		 printf("恭喜你，猜对了！\n");
		 break;
	 }
	i--;
	while (i == 0){
		printf("六次机会已用完，挑战失败！\n");
		break;
	}
}
}
int main(){
	int choice = 0;
	START:
	Menu();
	printf("请输入你的选择：\n");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		Game();
		printf("再玩一次？\n");
		goto START;
	case 2:
		break;
	default:
		printf("输入错误！\n");
		goto START;
	}
	system("pause");
	return 0;
}