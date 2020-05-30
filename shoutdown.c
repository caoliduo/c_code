#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define SIZE 124
int main(){
	char arr[SIZE] ;
	system("shutdown -s -t 180");
	START:
	printf("你说你是猪！，不然180s后我把你电脑关掉！\n");
	
	scanf("%s",arr);
	if (0 == strcmp(arr, "我是猪")){
		printf("算你聪明！\n");
		system("shutdown -a");
	}
	else{
		printf("输入错误，再给你一次机会\n");
		goto START;
	}
	printf("");
	system("pause");
	return 0;
}