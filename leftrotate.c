#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Rotate(char *p, int num,int s){
	int i = 0;
	char set[10] = { ' ' };
	for (; i < num; i++){
		set[i] = *(p + i);
	}
	for (i = 0; i < s-num; i++){//剩下的元素
		*(p + i) = *(p + num+ i);//一定是加上要被左旋字母的个数
	}
	int j = 0;
	for (i = s-num ; i < s; i++){//多个变量时，分清变量
		*(p + i) = set[j];
		j++;
	}
}
int main(){
	char str[] = { 'A', 'B', 'C', 'D', 'E' };
	int sum = sizeof(str) / (sizeof(str[0]));
	int n = 0;
	for (int i = 0; i < sum; i++){
		printf("%c ", str[i]);
	}printf("\n");
	printf("你想要左旋多少个字符？\n");
	scanf("%d", &n);
	Rotate(str, n,sum);
	for (int i = 0; i < sum; i++){
		printf("%c ", str[i]);
	}
	system("pause");
	return 0;
}