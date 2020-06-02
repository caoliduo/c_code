#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define NUM 100
void resort(int *f,int *s,int n){
	int i = 0;
		int j = 0,k=0;
		for (; j < n; j++){
			for (k=j+1; k < n ; k++){
				if (*(f + j)>*(f + k)){
					int temp = *(f + j);
					*(f + j) = *(f + k);
					*(f + k) = temp;
					int temp1 = *(s + j);
					*(s + j) = *(s + k);
					*(s + k) = temp1;
				}
				
			}
		}
		while (i < n){
			printf("第%d个s：%d ", i + 1, *s++);
			printf("第%d个f：%d ", i+1,*f++);
			i++;
			printf("\n");
		}
}
void greedy(int *f,int *s,int *c,int n1){
	int i = 0,n=i,j=0;
	for (i = 0; i < n1; i++){
		if (*(c + i) == 0){
			if (j == 0){//数组c里面第一个为0的元素，对应下标的活动被标记。
				*(c + i) = 1;
			}
			j++;
			}
			if (*(f + n) <= *(s + i + 1)){
				*(c + i + 1) = 1;
				n = i + 1;
			}
			else{
				//*(c + i) = 0;
				continue;
				}
		//用来判断是否为第一个满足条件的元素
	}
	i = 0;
	while (i<n1){
		printf("%d ", c[i]);
		i++;
	}printf("\n");
}
int Getnumber(int *f,int *s,int *c,int n2){
	int i = 0,flag=n2+1;
	int sum=0;
	while (flag){
		int jud = 0;
		for (i = 0; i < n2; i++){
			jud = jud + *(c + i);
		}
		if (jud == n2){
			return sum;
			break;
		}
		else{
	//c[i]的值为1表示，该值下标的f,s数组元素已经被排好。反之还未被排序
			greedy(f,s,c,n2);
			sum++;
		}flag--;
	}
	}
int main(){
	int f[NUM] = { 0 };
	int s[NUM] = {0};
	int ci[NUM] = {0};
	int num = 1;
	printf("请输入活动数目：" );
	scanf("%d", &num);
	for (int i = 0; i < num; i++){
		printf("第%d个活动的开始时间：", i + 1);
		scanf("%d", &s[i]);
		printf("第%d个活动的结束时间：", i + 1);
		scanf("%d", &f[i]);
		printf("\n");
	}
	resort(f, s,num);
	printf("需要%d个场地！\n",Getnumber(f,s,ci,num));
	system("pause");
	return 0;
}