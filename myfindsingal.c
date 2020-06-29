#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
findsingal(int *arr, int n, int *a, int *b){
	int res = 0;
	for (int i = 0; i < n; i++){
		res ^= *(arr + i);
	}
	int pos = 1;
	while (1) {
		if (res&pos){
			break;
		}pos << 1;
	}
	for (int i = 0; i < n; i++){
		if (*(arr + i)&pos){
			*a ^= *(arr + i);
			
		}
		else{
			*b ^= *(arr + i);
		}
	}
}
int main(){
	int x = 0;
	int y = 0;
	int arr[] = { 1, 3, 5, 7, 1, 3, 5, 7, 8, 9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	findsingal(arr,num,&x,&y);
	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}