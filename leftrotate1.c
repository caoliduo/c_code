#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 64
char * rotate(char *s,char *s1,int n,int l){
	int i = 0;
	while (i<l){
		*(s1+i)= *(s + n+i);
		i++;
	}*(s1 + i) = '\0';
	return s1;
}
int main(){
	char str[N] = "ABCDEF";
	char str1[N];
	int len = strlen(str);
	int n = 0;
	printf("请输入要左旋的个数：\n");
	scanf("%d", &n);
	strcat(str, "ABCDEF");
	printf("%s\n",rotate(str,str1, n%len, len));
	system("pause");
	return 0;
}