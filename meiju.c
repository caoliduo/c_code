#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#define SIZE 3
struct add{
	char name[64];
	char sex[10];
	int age;
	char telephone[15];
	char address[64];
};
void menu(){
	printf("***************************************************\n");
	printf("************************ͨѶ¼*********************\n");
	printf("**1.��ӳ�Ա��Ϣ****************2.ɾ����Ա*********\n");
	printf("**3.���ҳ�Ա��Ϣ****************4.�޸���Ϣ*********\n");
	printf("**5.�鿴ȫ��ͨѶ¼**************6.���ͨѶ¼*******\n");
	printf("**7.����������*************************************\n");
	printf("***************************************************\n");
}
int increase(struct add *s,int n ){
	s = (struct add *)realloc(s,sizeof(struct add )*SIZE);
	if (s == NULL){
		return 0;
	}
	else{
		printf("���ݳɹ�\n");
		return 1;
	}
}
void addmember(struct add * s, int n){

	if (n%SIZE||increase(s,n)){
		
	}
	printf("��������ϵ�˵�������\n");
	
	scanf("%s", &(s + n)->name);
	printf("��������ϵ�˵��Ա�\n");
	scanf("%s", &(s + n)->sex);
	printf("��������ϵ�˵����䣺\n");
	scanf("%d", &(s + n)->age);
	printf("��������ϵ�˵ĵ绰��\n");
	scanf("%s", &(s + n)->telephone);
	printf("��������ϵ�˵ĵ�ַ��\n");
	scanf("%s", &(s + n)->address);
	printf("��Ϣ�洢�ɹ���\n");
}
int  deletemenmber(struct add *s, int n){
	char name1[64];
	int j = 0;
	printf("����������Ҫɾ������ϵ�˵�������\n");
	scanf("%s", &name1);
	while (j < n){
		if (strcmp(name1, (s + j)->name) == 0){
			break;
		}
		j++;
	}if (j <n){
		*(s + j)->name = *(s + n-1)->name;
		(s + j)->age = (s + n- 1)->age;
		*(s + j)->sex = *(s + n- 1)->sex;
		*(s + j)->telephone = *(s + n- 1)->telephone;
		*(s + j)->address = *(s + n- 1)->address;
		printf("����ϵ���Ѿ�ɾ����\n");
		n--;
		return n;
	}
	else{
		printf("�޸���ϵ�ˣ�ɾ��ʧ��!\n");
		return n;
	}
}
void findmember(struct add *s, int n){
	int j = 0;
	char name2[64];
	printf("��������Ҫ���ҵ�������\n");
	scanf("%s", name2);
	printf("��ѯ������£�\n");
	while (j < n){
		if (strcmp(name2, (s + j)->name) == 0){
			printf("������%s\n", (s + j)->name);
			printf("�Ա�%s\n", (s + j)->sex);
			printf("���䣺%d\n", (s + j)->age);
			printf("�绰��%s\n", (s + j)->telephone);
			printf("��ַ��%s\n", (s + j)->address);
			break;
		}
		j++;
	}
	if (j == n){
		printf("�޽����\n");
	}
}
void alterinformation(int n, struct add *s){
	char name3[64];
	printf("�������������Ϣ��Ӧ��������\n");
	scanf("%s", name3);
	int dug = 1, j = 0;
	for (j; j < n; j++){
		if (strcmp(name3, s[j].name) == 0){
			printf("�����޸�ʲô��Ϣ��1.������2.���䣬3.�Ա�4.�绰��5.��ַ�������룺\n");
			int get = 0;
			scanf("%d", &get);
			switch (get){
			case 1:
				printf("�����޸ĺ��������\n");
				scanf("%s", &(s + j)->name);
				break;
			case 2:
				printf("�����޸ĺ�����䣺\n");
				scanf("%d", &(s + j)->age);
				break;
			case 3:
				printf("�����޸ĺ���Ա�\n");
				scanf("%s", &(s + j)->sex);
				break;
			case 4:
				printf("�����޸ĺ�ĵ绰��\n");
				scanf("%s", &(s + j)->telephone);
				break;
			case 5:
				printf("�����޸ĺ�ĵ�ַ��\n");
				scanf("%s", &(s + j)->address);
				break;
			default:
				printf("��Ϣ����\n");
				dug = 0;
			}if (dug){
				printf("�޸ĳɹ���\n");
			}
			else{
				printf("�޸�ʧ��\n");
			}break;
		}
	}if (j == n){
		printf("����ϵ�˲�����!\n");
	}
}
void see(int n, struct add *s){
	printf("ͨѶ¼��Ա���£�\n");//trouble
	if (n == 0){
		printf("��ԱΪ�գ�\n");
	}
	else{
		struct add *j;
		for (j = s; j < s + n; j++){
			printf("������%s\n", (j)->name);
			printf("�Ա�%s\n", (j)->sex);
			printf("���䣺%d\n", (j)->age);
			printf("�绰��%s\n", (j)->telephone);
			printf("��ַ��%s\n", (j)->address);
			printf("***********\n");
		}
	}
}
int  cleanup(int n, struct add *s, int size){
	printf("�ò�����Ҫ���ͨѶ¼�����Ƿ������1.yes��2.no  �����룺\n");
	int select = 0;
	scanf("%d", &select);
	if (select = 1){
		memset(s, 0, size);
		printf("��ճɹ���\n");
		return 0;
	}
	else{
		printf("�Ѿ�ȡ����գ�\n");
		return n;
	}
}
void sortbyname(int n, struct add *s){
	printf("�����ݰ����������к�\n");
	if (n > 1){
		struct add exam;
		for (int j = 0; j < n - 1; j++){
			for (int k = j + 1; k<n; k++){
				if (strcmp(s[j].name, s[k].name)>0){
					exam = s[j];
					s[j] = s[k];
					s[k] = exam;
				}
			}
		}
	}
	for (int j = 0; j < n; j++){
		printf("������%s\n", (s + j)->name);
		printf("�Ա�%s\n", (s + j)->sex);
		printf("���䣺%d\n", (s + j)->age);
		printf("�绰��%s\n", (s + j)->telephone);
		printf("��ַ��%s\n", (s + j)->address);
	}
}
int main(){
	FILE *f = fopen("F:\\addressbook.txt", "r");
	if (f == NULL){
		printf("open file failed!\n");
	}
	else{
		printf("open file succeed!\n");
	}
	struct add *a=NULL;
	a = (struct add*) malloc(sizeof(struct add )*SIZE );
	if (a == NULL){
		printf("�ڴ����ʧ��!\n");
	}
	int choice = 0;
	//int count = 0;
	int i = 0;

start:
	menu();
	printf("���������ѡ��\n");
	scanf("%d", &choice);
	switch (choice){
	case 1:
		
		addmember(a, i);
		i++;
		break;
	case 2:
		i = deletemenmber(a, i);
		break;
	case 3:
		findmember(a, i);
		break;
	case 4:
		alterinformation(i, a);
		break;
	case 5:
		see(i, a);
		break;
	case 6:
		i = cleanup(i, a, sizeof(a));
		break;
	case 7:
		sortbyname(i, a);
		break;
	default:
		printf("����������������룡\n");
		break;
	}

	goto start;

	system("pause");
	fwrite(a, sizeof(a), 1, f);
	fclose(f);
	free(a);
	return 0;
}
