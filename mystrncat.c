#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
char * mystrncat(char *a, char *b, int n){
	char *add = a;
	while (*a ){
		a++;
	}
	for (int i = 0; i < n; i++){
		*(a + i) = *(b + i);
	}
	*(a + n) = '\0';
	return add;
}
int main(){
	char arr[] = "abcdf";
	char str[10] = "xv";
	mystrncat(str,arr,3);
	printf("%s\n", str);
	system("pause");
	return 0;
}