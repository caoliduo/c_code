#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 3
void find(int a[][N], int i1,int n1){
	int i = 0,j=0;
	for (; i < N; i++){
		if( a[i1][i] == n1){
			printf("%d�ڸ������� \n", a[i1][i]);
			break;
		}
	}if (i == N){
		printf("�������������ڣ�\n");
	}
}
int main(){
	int arr[N][N] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int n = 0;
	printf("��������Ҫ���ҵ�����\n");
	scanf("%d", &n);
	int i = 0;
	for (; i < N; i++){
		if (n < arr[i][N - 1]){
			find(arr,i,n);
			break;
		}
		 if (n == arr[i][N - 1]){
			 printf("���������ڶ�ά�����\n");
			 break;
		}
	}if (i == N){
		printf("�������ڶ�ά�������棡\n");
	}
	system("pause");
	return 0;
}
