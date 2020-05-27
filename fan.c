#include<stdio.h>
#pragma warning(disable:4996)
#include<Windows.h>
#include<string.h>
void reverse(char *p, char *pl){
	while (p<pl){
		char temp = *p;
		*p = *pl;
		*pl = temp;
		pl--;
		p++;
	}
}
int main(){
	char input[100];
	gets(input);
	reverse(input, input + strlen(input) - 1);
	char *start = input;
	while (*start){
		char *end = start;
		while (*end != ' '&&*end){
			*end++;
		}
		reverse(start, 
			end - 1);
		if (*end){
			start = end+1;
		}
		else{
			start = end;
			
		}
	}
	printf("%c", input);
	system("pause");
	return 0;
}