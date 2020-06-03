#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 3
void rotate(int t[N][N], int n){
	for (int i = 0; i < n-1; i++){
		int a = t[0][i];
		t[0][i] = t[2 - i][0];
		t[2 - i][0] = t[2][2 - i];
		t[2][2 - i] = t[i][2];
			t[i][2] = a;
}
	for (int i = 0; i < N;i++){
		for (int j = 0; j < N; j++){
			printf("%d ", t[i][j]);
			
		}printf("\n");
	}
}
int main(){
	int arr[N][N] = { 0 };
	int i = 0,j=0,n=1;
	for (; i < N; i++){
		j = 0;
		for (j=0; j < N; j++){
			arr[i][j] = n;
			printf("%d ", arr[i][j]);
			n++; 
		}printf("\n");
	}
	rotate(arr, N);
	system("pause");
	return 0;
}