#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
int mystrlen(char *a){
	assert(a);
	int i = 0;
	while (*a){
		i++;
		*a++;
	}
	return i;
}
int main(){
	char str[] = "helloworld";
	printf("%d\n",mystrlen(str));
	system("pause");
	return 0;
}
