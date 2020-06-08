#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int mystrcmp(char *s1,char *s2){
	while (*s1 || *s2){
		if (*s1 > *s2){
			return 1;
		}
		else if (*s1 == *s2){
			s1++; s2++;
			continue;
		}
		else{
			return -1;
		}
	}return 0;
}
int main(){
	char str1[] = "acdef";
	char str2[] = "acdefd";
	printf("%d\n",mystrcmp(str1,str2));
	system("pause");
	return 0;
}