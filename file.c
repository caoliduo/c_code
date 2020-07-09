#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp = fopen("F:\\practice.txt", "w");
	if (fp == NULL){//ÅÐ¶ÏÊÇ·ñ´ò¿ª
		printf("open error\n");
		exit(1);
	}
	char a[10] = "xyz";
	fwrite(a, 3, 1, fp);
	//printf("%s", a);
	fclose(fp);
	system("pause");
	return 0;
}