#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void * mymemmove(void *dst, const void *src, int l){
	void *ret = dst;
	char *dst_t = (char *)dst;
	const char *src_t = (char *)src;
	int i = 0;
	if (l == 0){
		return NULL;
	}
	if (dst == NULL||src == NULL){
		return NULL;
	}
	else if (dst_t > src_t&&dst_t<src_t+l){
		//*(dst_t + l) = '\0';
		while (l){ 
			 *(dst_t + l - 1) = * (src_t + l - 1);
			l--;
		}
		return ret;
	}
	
	else{
		while (i<l){
		*(dst_t + i) = *(src_t + i);
		i++;
	}
		return ret;
	}
}
int main(){
	char str[] = "abcdefg";
	char str1[] = "xyz";
	int s = 5;
	int *a = &s;
	mymemmove(str+1, a, 4);
	printf("%s\n", str);
	system("pause");
	return 0;
}