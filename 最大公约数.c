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
int main(){//�������������Լ��
	int num1 = 0, num2 = 0;
	printf("�ֱ���������������֮��ո��������\n");
	scanf("%d %d", &num1, &num2);
	printf("���Լ��Ϊ��\n");
	HCF(num1, num2);
	system("pause");
	return 0;
}