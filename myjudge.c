#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void Print(){
	int a = 1;
	for (; a <= 5; a++){
		int b = 1;
		for(;b<=5;b++){
			int c = 1;
			for (; c <= 5; c++){
				int d = 1;
				for (; d <= 5; d++){
					int e = 1;
					for (; e < 5; e++){
						if (((b == 2) + (a==3))==1&&((b==2)+(e==4))==1&&((c==1)+(d==2))==1&&((c==5)+(d==3))==1&&((e==4)+(a==1))==1)
						if ((a != b)&&(b != c)&&(c != d)&&d != e&&a!=d&&(a+b+c+d+e)==15){
						printf("a:%d b:%d c:%d d:%d e:%d \n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}
int main(){
	int i = 0;
	int sum = 0;
	for (i = 10000; i < 100000; i++){
		sum = i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10;
		if (sum % 3 == 0 && i % 10 == 6){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}