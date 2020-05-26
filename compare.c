#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
//int Max(char arr1[], char arr2[]){
//	int a = strcmp(arr1, arr2);
//	if (-1 == a){
//		return 2;
//	}
//	else{
//		return 1;
//	}
//}
int main(){
	int i=0;
	char arr[] = {0};
	char arr3[] = { 0 };
	printf("请输入两个数(以a+bi形式输入，以*结束):");
		for (i = 0; ; i++){
			scanf("%s", &arr[i]);
			if ('*' == arr[i]){
				break;
			}
			break;
		}
		for (int i1 = 0; i1 = i; i1++){
			printf("第%d个元素:", i1, arr[i1]);
		}
		int j=0;
		for (j = 0; ; j++){
			 scanf("%s", &arr3[j]); 
			 if ('*' == arr3[j]){ break; }
			 break;
		}
		/*printf("1表示前者，2表示后者。");
		printf("最大的是:%d", Max(arr, arr3));*/
	system("pause");
	return 0;

}