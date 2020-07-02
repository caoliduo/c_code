#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#define SIZE 1000
struct add{
	char name[64];
	char sex[10];
	int age;
	char telephone[15];
	char address[64];
};
void menu(){
	printf("***************************************************\n");
	printf("************************通讯录*********************\n");
	printf("**1.添加成员信息****************2.删除成员*********\n");
	printf("**3.查找成员信息****************4.修改信息*********\n");
	printf("**5.查看全部通讯录**************6.清空通讯录*******\n");
	printf("**7.按姓名排序*************************************\n");
	printf("***************************************************\n");
}
void addmember(struct add * s,int n){
	printf("请输入联系人的姓名：\n");
	scanf("%s", &(s+n)->name);
	printf("请输入联系人的性别：\n");
	scanf("%s", &(s+n)->sex);
	printf("请输入联系人的年龄：\n");
	scanf("%d", &(s+n)->age);
	printf("请输入联系人的电话：\n");
	scanf("%s", &(s+n)->telephone);
	printf("请输入联系人的地址：\n");
	scanf("%s", &(s+n)->address);
	printf("信息存储成功！\n");
}
int  deletemenmber(struct add *s,int n){//trouble
	char name1[64];
	int j = 0;
	printf("请输入你想要删除的联系人的姓名：\n");
	scanf("%s", &name1);
	int x = 0;
	while (j < n){
		if (strcmp(name1 , (s + j)->name)==0){
			break;
		}
	j++;
	}if (j <n){
		for (x = j; x <n; x++){
			*(s + x)->name = *(s + x + 1)->name;
			(s + x)->age = (s + x + 1)->age;
			*(s + x)->sex = *(s + x + 1)->sex;
			*(s + x)->telephone = *(s + x + 1)->telephone;
			*(s + x)->address = *(s + x+ 1)->address;
		}
		printf("该联系人已经删除！\n");
		n--;
		return n;
	}
	else{
		printf("无该联系人，删除失败!\n");
		return n; }
}
void findmember(struct add *s,int n){
	int j = 0;
	char name2[64];
	printf("请输入需要查找的姓名：\n");
	scanf("%s", name2);
	printf("查询结果如下：\n");
	while (j < n){
		if (strcmp(name2 ,(s + j)->name)==0){
			printf("姓名：%s\n", (s + j)->name);
			printf("性别：%s\n", (s+j)->sex);
			printf("年龄：%d\n", (s + j)->age);
			printf("电话：%s\n", (s + j)->telephone);
			printf("地址：%s\n", (s + j)->address);
			break;
		}
		j++;
	}
	if (j == n){
			printf("无结果！\n");
	}
}
void alterinformation(int n,struct add *s){
	char name3[64];
	printf("请输入你相关信息对应的姓名：\n");
	scanf("%s", name3);
	int dug = 1,  j = 0;
	for (j; j < n; j++){
		if (strcmp(name3, s[j].name)==0){
			printf("你想修改什么信息？1.姓名，2.年龄，3.性别，4.电话，5.地址，请输入：\n");
			int get = 0;
			char c[10];
			scanf("%d", &get);
			switch (get){
			case 1:
				printf("输入修改后的姓名：\n");
				scanf("%s", &(s + j)->name);
				break;
			case 2:
				printf("输入修改后的年龄：\n");
				scanf("%d", &(s + j)->age);
				break;
			case 3:
				printf("输入修改后的性别：\n");
				scanf("%s", &(s + j)->sex);
				break;
			case 4:
				printf("输入修改后的电话：\n");
				scanf("%s", &(s + j)->telephone);
				break;
			case 5:
				printf("输入修改后的地址：\n");
				scanf("%s", &(s + j)->address);
				break;
			default:
				printf("信息错误！\n");
				dug = 0;
			}if (dug){
			printf("修改成功！\n");
			}
			else{
				printf("修改失败\n");
			}break;
		}
	}if (j == n){
		printf("该联系人不存在!\n");
	}
}
void see(int n,struct add *s){
	printf("通讯录成员如下：\n");//trouble
	if (n == 0){
		printf("成员为空！\n");
	}
	else{
		struct add *j;
	for (  j = s; j < s+n; j++){
		printf("姓名：%s\n", (j)->name);
		printf("性别：%s\n", (j)->sex);
		printf("年龄：%d\n", (j)->age);
		printf("电话：%s\n", (j)->telephone);
		printf("地址：%s\n", (j)->address);
	}
	}
}
int  cleanup(int n,struct add *s,int size){
	printf("该操作将要清空通讯录！，是否继续？1.yes，2.no  请输入：\n");
	int select = 0;
	scanf("%d", &select);
	if (select = 1){
		memset(s, 0, size);
		printf("清空成功！\n");
		return 0;
	} 
	else{
		printf("已经取消清空！\n");
		return n;
	}
}
void sortbyname(int n,struct add *s){
	printf("将内容按照姓名排列后：\n");
	if (n > 1){
		struct add exam;
	for (int j = 0; j < n - 1; j++){
		for (int k = j + 1;k<n; k++){
			if (strcmp(s [ j].name,s [ k].name)>0){
				exam = s[j];
				s[j] = s[k];
				s[k] = exam;
			}
		}
}
	}
	for (int j = 0; j < n; j++){
		printf("姓名：%s\n", (s+j)->name);
		printf("性别：%s\n", (s+j)->sex);
		printf("年龄：%d\n", (s+j)->age);
		printf("电话：%s\n", (s+j)->telephone);
		printf("地址：%s\n", (s+j)->address);
	}
}
int main(){
	struct add a[SIZE];
	int choice = 0;
	int count = 0;
	int i = 0;
	start:
	menu();
	printf("请输入你的选择：\n");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		addmember(a,i);
		i++;
		break;
	case 2:
		//deletemenmber(a, i);
		i=deletemenmber(&a,i);
		break;
	case 3:
		findmember(a,i);
		break;
	case 4:
		alterinformation(i,a);
		break;
	case 5:
		see(i,a);
		break;
	case 6:
		i=cleanup(i,a,sizeof(a));
		break;
	case 7:
		sortbyname(i,a);
		break;
	default:
		printf("输入错误！请重新输入！\n");
		break;
	}
	goto start;
	system("pause");
	return 0;
}