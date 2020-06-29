#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int myatoi(const char *str){
	int num = 0;
	int i = 0;
	while (*str){
		if (*str<='9' && *str>='0'){//第一个字符为数字
			num = *str-'0';
			str++;
			while (*str <= '9' && *str >= '0'){
				num = num * 10 + (*str - '0');
				str++;
			}return num;
			break;
		}
		else if (*str == '+' || *str == '-'){
			char *a = str;//第一个字符为正负号
			str++;
			while(*str <= '9' && *str >= '0'){
				num = num*10+(*str-'0');
			    str++;
			}if (*a == '-'){
				return -num;
				break;
			}
			else {
				return num;
				break;
			}
		}
		else{//第一个符号位空格或者字母或者其他类型
			return 0;
		}
	}
}
int main(){
	char arr[] = "  ab1cd3  ef";
	printf("%d\n", atoi(" p-1023kk"));
	printf("%d\n", myatoi(" p-1023kk"));
	system("pause");
	return 0;
}