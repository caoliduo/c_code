#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define SIZE 124
int main(){
	char arr[SIZE] ;
	system("shutdown -s -t 180");
	START:
	printf("��˵����������Ȼ180s���Ұ�����Թص���\n");
	
	scanf("%s",arr);
	if (0 == strcmp(arr, "������")){
		printf("���������\n");
		system("shutdown -a");
	}
	else{
		printf("��������ٸ���һ�λ���\n");
		goto START;
	}
	printf("");
	system("pause");
	return 0;
}