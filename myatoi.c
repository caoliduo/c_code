#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int myatoi(const char *str){
	int num = 0;
	int i = 0;
	while (*str){
		if (*str<='9' && *str>='0'){//��һ���ַ�Ϊ����
			num = *str-'0';
			str++;
			while (*str <= '9' && *str >= '0'){
				num = num * 10 + (*str - '0');
				str++;
			}return num;
			break;
		}
		else if (*str == '+' || *str == '-'){
			char *a = str;//��һ���ַ�Ϊ������
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
		else{//��һ������λ�ո������ĸ������������
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