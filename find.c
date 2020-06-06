#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 3
void find(int a[][N], int i1,int n1){
	int i = 0,j=0;
	for (; i < N; i++){
		if( a[i1][i] == n1){
			printf("%d在该数组内 \n", a[i1][i]);
			break;
		}
	}if (i == N){
		printf("该数不在数组内！\n");
	}
}
int main(){
	int arr[N][N] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int n = 0;
	printf("请输入你要查找的数：\n");
	scanf("%d", &n);
	int i = 0;
	for (; i < N; i++){
		if (n < arr[i][N - 1]){
			find(arr,i,n);
			break;
		}
		 if (n == arr[i][N - 1]){
			 printf("该数包含在二维数组里！\n");
			 break;
		}
	}if (i == N){
		printf("该数不在二维数组里面！\n");
	}
	system("pause");
	return 0;
}
