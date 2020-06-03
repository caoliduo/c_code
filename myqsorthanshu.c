#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 10
int compareint(void *t, void *t1){
	int *a = (int*)t;
	int *b = (int*)t1;
	return *a - *b;
}
void swap(void *a,void *b){
	int *c = (int *)a;
	int *d = (int *)b;
	int x = *c;
	*c = *d;
	*d = x;
}
void Myqsort(int *a, int n, int size, int (*compareint)(void*, void *)){
	int i = 0;
	for (; i < n-1; i++){
		int j = i+1;
		for (; j < n ; j++){
			if (compareint((int *)(a + i), (int *)(a + j))>0){
				swap((int *)(a + i), (int *)(a + j));
			}
		}
	}
}
int main(){
	int a[N] = { 19, 3, 2, 67, 4, 5, 8, 13, 76, 43 };
	char str[N] = 'a', 'B', 'A', 'k', 'U', 'L', 'f', 'e', 'P', 'm';
	int i = 0;
	for (; i < N; i++){
		printf("%d ", a[i]);
	}printf("\n");
	Myqsort(a, N, sizeof(int), compareint); 
	for (i=0; i < N; i++){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}