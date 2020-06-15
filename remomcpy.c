#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void * mymomcpy(void *a,void *b,int l){
	if (a == NULL || b == NULL){
		return NULL;
	}
	else{
		char * s1 = (char*)a;
		char *s2 = (char*)b;
	
	void *str = a;
	while (l > 0){
		*s1 = *s2;
		l--;
		s1++;
		s2++;
	}
	return str;
	}
}
int main(){
	char a[] = "abcdef";
	
	char b[32] = "abcedfg";
	mymomcpy(b,a,strlen(a)-2);
	printf("%s\n", b);
	system("pause");
	return 0;
}