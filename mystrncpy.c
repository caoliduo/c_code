#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
char * mystrncpy(char *a,const char *b,int n){
	char *add = a;
	for (int i = 0; i < n; i++){
		*(a + i) = *(b + i);
	}
	return add;
}
int main(){
	char arr[] = "abcdef";
	char str[10] = "kkl";
	//strncpy(str, arr, 8);
	printf("%s\n", str);
	mystrncpy(str,arr,8);
	printf("%s\n", str);
	system("pause");
	return 0;
}