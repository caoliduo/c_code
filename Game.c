#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
void Menu(){
	printf("**********************��ӭ������Ϸ��**********************\n");
	printf("**********************���������ѡ��:*********************\n");
	printf("********1.GAME********************2.QUIT****************\n");
	printf("********************************************************\n");
}
void Game(){
	printf("*****��Ϸ���򣺵����������һ��0-100�����֣������²��������*****\n");
	printf("�������λ���Ŷ��\n");
	srand((unsigned int)time(NULL));
	int x=0,i=6;
	int data = rand() % 100 + 1;//�����ˡ�1-100������������֡�
	while (i != 0){
		printf("������µĴ𰸣�\n");
		scanf("%d", &x);
	if (x > data){
		printf("�´��ˣ�\n");
	}
	 else if (x < data){
		printf("��С�ˣ�\n");
	 }
	 else{
		 printf("��ϲ�㣬�¶��ˣ�\n");
		 break;
	 }
	i--;
	while (i == 0){
		printf("���λ��������꣬��սʧ�ܣ�\n");
		break;
	}
}
}
int main(){
	int choice = 0;
	START:
	Menu();
	printf("���������ѡ��\n");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		Game();
		printf("����һ�Σ�\n");
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