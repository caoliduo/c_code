#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define SIZE 100
void resort(char longer[], char shorter[],int l,int s){
	char c[SIZE] = { 0 };
	char *p =shorter;
	int i = 0;
	while (*p&&i!=l){
		if (*p >= longer[i]){
			c[strlen(c)] = longer[i];
			i++;
		}
		else{
			c[strlen(c)] = *p;
			*p++;
		}

	}
	if (i != l){
		while (i != l){
		c[strlen(c)] = longer[i];
			i++;
		}
	}
	else{
		while (*p){
		c[strlen(c)] = *p;
		*p++;}
	}
	
	
		printf("%s ", c);
	
}
int main(){
	char arr1[SIZE];
	gets(arr1);
	char arr2[SIZE];
	gets(arr2);
	int n1 = strlen(arr1);
	int n2 = strlen(arr2);
	if (n1 > n2){
		resort(arr1, arr2,n1,n2);
		printf("1");
	}
	else{
		resort(arr2, arr1,n2,n1);
		printf("2");
	}
	system("pause");
	return 0;
}