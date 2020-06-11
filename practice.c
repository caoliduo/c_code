#include <stdio.h> 
#include<Windows.h>
#pragma warning(disable:4996)
#define SIZE 64
typedef struct str{
	char zhu [6];
	char wei[6];
	char bing[10];
}s;
int main()
{
	s str = { "i ", "like ", "beijing." };
	scanf("%s %s %s", &str.zhu, &str.wei, &str.bing);
	printf("%s %s %s\n", str.bing, str.wei, str.zhu);
	system("pause");
	return 0;
}
