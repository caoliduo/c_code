#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void transTwo(int n){
	if (n == 0 || n == 1){
		printf("%d", n);
	}
	else{
		transTwo(n / 2);
		printf("%d", n % 2);
	}
}
void transSixteen(int n){
	if (n < 16){
		if (n < 10){
			printf("%d", n);
		}
		else{
		printf("%c", 55 + n);
		}
	}
	else{
		transSixteen(n / 16);
		//printf("%d\n", n % 16);
		if (n % 16 < 10){
			printf("%d", n%16);
		}
		else{
			printf("%c", 55 + n%16);
		}
	}
}
int main(){
	int num= 0;
	printf("������һ������\n");
	scanf("%d", &num);
	printf("�����ƣ�\n");
	transTwo(num);
	printf("\n");
	printf("ʮ�����ƣ�\n");
	//printf("%c", 65);
	transSixteen(num);
	system("pause");
	return 0;
}