#include<stdio.h>
#pragma warning(disable:4996)
#include<Windows.h>
int main(){
	char a = 'x';
	for (; a <= 'z'; a++){
		char b = 'x';
		for (; b <= 'y'; b++){
			char c = 'x';
			for (; c <= 'y'; c++){
				if (a != 'x'&&c != 'x'&&c != 'z'&&a!=b&&b!=c&&a!=c){
					printf("a&%c  b&%c  c&%c\n", a, b, c);
				}
			}
		}
	}
	system("pause");
	return 0;
}