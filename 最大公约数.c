#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void HCF(int a, int b){
	int c = 0;
	while (0 != a%b){
		c = a%b;
		a = b;
		b = c;
	}printf("%d\n", b);
}
int main(){//求两个数的最大公约数
	int num1 = 0, num2 = 0;
	printf("分别输入两个数（数之间空格隔开）：\n");
	scanf("%d %d", &num1, &num2);
	printf("最大公约数为：\n");
	HCF(num1, num2);
	system("pause");
	return 0;
}