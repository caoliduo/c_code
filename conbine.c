#include <stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Print(int n1,  int num){
	int sum = 1,m=1;
	int i = 0;
	for ( i = num-n1+1; i <= num; i++){
		sum = sum*i;
	}
	for (i = n1; i > 0; i--){
		m = m*i;
	}
	printf("%d \n", sum / m);
	
	
}
int main(){
	char a[100] ;
	char a2[10] = { 0 };
	gets(a);
	int n = 0;
	int num = strlen(a);
	a2[0] = a[num-1];
	while (num-1){
		/*for (int i = 0; i < num; i++){
			int x = a[i];
			}*/
		if ((a2[(strlen(a2))-1])!= a[num-1])
		{
		a2[strlen(a2)] = a[num-1];
		}
		if (a[num-1] == a2[0]){
			n++;
		}
		num---1;

	}
	
	printf("%d %s\n", n, a2);
	Print(n,  strlen(a));
	system("pause");
	return 0;
}