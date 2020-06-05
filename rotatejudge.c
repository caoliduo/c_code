#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int  rotate(char *p,  int s){
	int i = 0;
		char a = *(p + 0);
		for (i = 1; i < s; i++){
			*(p + i - 1) = *(p + i);
		}*(p + i - 1) = a;
}
int main(){
	char arr[] = "AABCD";
	char arr1[] = {'0'};
	int size = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i < size; i++){
		printf("%c ", arr[i]);
	}
	gets(arr1);
	int num = 0;
	for (int i = 0; i < size; i++){
		rotate(arr, size);
		if (strcmp(arr, arr1) == 0){
			num++;
			printf("%d \n", 1);
			break;
		}
	}while (num==0){ 
		printf("-1\n"); 
		break;
	}
	system("pause");
	return 0;
}