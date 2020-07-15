#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define swap(n)  ((n & 0x55555555) << 1) + ((n & 0xAAAAAAAA) >> 1)
int main(){
	int n = 4;
	//printf("%d\n", *(char *)&a);
	int a=swap(n);
	printf("%d",a);
	system("pause");
	return 0;
}