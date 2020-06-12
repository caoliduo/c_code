#include<stdio.h>
#include<Windows.h>
#pragma warning (disable:4996)
char  * mystrstr(char *a,char *b){
	char *add = NULL;
	while (*a){
		if (*a == *b){
			add = a;
		while (*b){
			if (*a == *b){
			*a++;
			*b++;
			}
			else{
				return NULL;
			}
		}return add;
		}
		else{
		*a++;}
	}return NULL;
}
int main(){
	char str[] = "abdefghi";
	char str1[] = "defgh";
	char *p = mystrstr(str, str1);
	printf("%p\n", p);
	system("pause");
	return 0;
}