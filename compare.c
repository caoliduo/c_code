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
	printf("������������(��a+bi��ʽ���룬��*����):");
		for (i = 0; ; i++){
			scanf("%s", &arr[i]);
			if ('*' == arr[i]){
				break;
			}
			break;
		}
		for (int i1 = 0; i1 = i; i1++){
			printf("��%d��Ԫ��:", i1, arr[i1]);
		}
		int j=0;
		for (j = 0; ; j++){
			 scanf("%s", &arr3[j]); 
			 if ('*' == arr3[j]){ break; }
			 break;
		}
		/*printf("1��ʾǰ�ߣ�2��ʾ���ߡ�");
		printf("������:%d", Max(arr, arr3));*/
	system("pause");
	return 0;

}