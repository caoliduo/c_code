#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 6
int compint(const void *a,const void*b){
	return *(int*)a - *(int*)b;
}
int compchar(const void *a, const void*b){
	return *(char*)a - *(char*)b;
}
int compf(const void *a, const void*b){
	return *(float *)a - *(float*)b;
}
int main(){
	int arr[N] = { 0, 2, 1, 7, 3, 9 };
	//int n1 = sizeof(arr) / sizeof(arr[0]);
	char str[N] = { 'a', 'p', 'e', 't', 'r', 'c' };

	float f[N] = { 1.2, 8.8, 5.6, 2.4, 0.3, 4.2 };
	qsort(arr, N, sizeof(int), compint);
	qsort(str, N, sizeof(char), compchar);
	qsort(f, N, sizeof(float), compf);
	int i = 0;
	for (; i < N; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	for (i=0; i < N; i++){
		printf("%c  ", str[i]);
	}printf("\n");
	for (i=0; i < N; i++){
		printf("%f  ", f[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}