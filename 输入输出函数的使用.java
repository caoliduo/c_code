#include<stdio.h>
int main(){
    int a=0;
    int b=0;
    scanf("a=%d,b=%d",&a,&b);//输入只有一行，按照格式输入两个整数，范围，中间用“,”分隔。
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);//把两个整数按格式输出，中间用“,”分隔。
    return 0;
}