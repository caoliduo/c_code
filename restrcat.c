#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 64
char * mystrcat(char *a,char *b){
	char *str = a;
	while (*str){
		str++;
	}int j = 0;
	while (*b){
		*(str++) = *(b);
		b = b +++ j;
	}
	return a;
}
int main(){
	char arr1 [N]= "hello";
	char arr2 [N]="world";
	printf("%s\n", mystrcat(arr1, arr2));
	//mystrcat(arr1, arr2);
	printf("%s\n", arr1);
	//printf("%s", strcat(arr1, arr2));
	system("pause");
	return 0;
}