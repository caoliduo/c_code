#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void reverse(char *a,int s,int e){
	while (s < e){
		*(a + s) ^=*(a + e);
		*(a + e) ^= *(a + s);
		*(a + s) ^= *(a + e);
		s++; e--;
	}
}
int main(){
	int n = 0;
	char str[] = "ABCDEF";
	int len = strlen(str);
	printf("你想要左旋多少个字母：\n");
	scanf("%d", &n);
	reverse(str,0, n%len - 1);
	reverse(str,n%len, len - 1);
	reverse(str,0, len - 1);
	printf("%s\n", str);
	system("pause");
	return 0;
}