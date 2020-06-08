#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
#define N 64
char * mystrcpy(char *s1, char *s2){
	assert(s1 != NULL&&s1 != NULL);
	char *str = s1;
	while (*s2){
		*str++ = *s2++;
	}*str++ = *s2;
	return s1;
}
int main(){
	char a[N] = { "abcdef" };
	char b[N];
	printf("%s\n",mystrcpy(b, a));
	system("pause");
	return 0;
}