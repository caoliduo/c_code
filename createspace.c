#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Print(int n){
	int i = 0, j = 0;
	for (; i < n; i++){
			if (i == 0){
				for (int i = 0; i < 2 * n - 1; i++){
				printf("%d ", 1);
				}printf("\n");
				continue;
			}
			else {
				for (int k = 0; k < i+1; k++){
					printf("%d ", k+1);
				}int k = i;
				for (; k < 2*n-2-i; k++){
					printf("%d ", i + 1);
				}
				for (k = i; k >=1; k--){
					printf("%d ", k);
				}
			}printf("\n");
		}
}
void Print1(int n1){
	int i = 0;
	for (; i < n1 - 1; i++){
		if (i ==  n1 - 2){
			for (int i = 0; i < 2 * n1 - 1; i++){
				printf("%d ", 1);
			}printf("\n");
			continue;
		}
		else{
			for (int j = 0; j <n1-2-i; j++){
				printf("%d ", j + 1);
			}int j = 0;
			for (; j <( i+1)*2+1; j++){
				printf("%d ", n1 - 1-i);
			}
			for (j = n1 - 2 - i; j >= 1; j--){
				printf("%d ", j);
			}
		}printf("\n");
	}
}
int main(){
	int N = 0;
	printf("ÇëÊäÈë0-9µÄÊı×Ö£º\n");
	scanf("%d", &N);
	Print(N);
	Print1(N);
	system("pause");
	return 0;
}