#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	int id;
	char name[50];
	char place[50];
	int number;
	int price;
};
struct stu str[1000];
int choose_number;//���ڲ���ѡ�������
int n=0;//��ʾ�����ж�����Ʒ

void wel_come();//��ӭҳ��
void choo_se00();//ѡ��˵�
void choo_se01();//�¹���Ʒ���
void choo_se02();//��Ʒ��Ϣɾ��
void choo_se03();//��Ʒ��Ϣ�޸�
void choo_se04();//��Ʒ��Ϣ��ѯ
void choo_se05();//��Ʒ��Ϣ���
void choo_se06();//������ɫ����
void choo_se07();//Ӧ�ó����˳�

int main ()
{
	memset(str,0,sizeof(str));
	str[0].id=1;
	strcpy(str[0].name,"ƻ��");
	strcpy(str[0].place,"��̨");
	str[0].number=20;
	str[0].price=3;
	n++;
	wel_come();
	choo_se00();	
	while(1)
	{
		printf("��������һ������\n");
		scanf("%d",&choose_number);
		if(choose_number==7)
		{
			system("cls");
			choo_se07();
		}
		if(choose_number==1)
		{
			system("cls");
			choo_se01();
		}
		if(choose_number==2)
		{
			system("cls");
			choo_se02();
		}
		if(choose_number==3)
		{
			system("cls");
			choo_se03();
		}
		if(choose_number==4)
		{
			system("cls");
			choo_se04();
		}
		if(choose_number==5)
		{
			system("cls");
			choo_se05();
		}
		if(choose_number==6)
		{
			system("cls");
			choo_se06();
		}
		system("cls");
		choo_se00();		
	}
	return 0;
}

void wel_come()
{
	char a[14][100]={
	"***************************************************************************************",
	"*                                                                                     *",
	"*                                       ��ӭʹ��                                      *",
	"*                                                                                     *",
	"*-------------------------------------------------------------------------------------*",
	"*                                                                                     *",
	"*                                                                                     *",
	"*                                     ���п����ϵͳ                                  *",
	"*                                                                                     *",
	"*-------------------------------------------------------------------------------------*",
	"*                                                                                     *",
	"*                                      ��������˳�                                   *",
	"*                                                                                     *",
	"***************************************************************************************"
	};
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n");
	}
	for(i=0;i<14;i++)
	{
		printf("                  ");
		printf("%s\n",a[i]);
	}
	getchar();
	system("cls");
}

void choo_se00()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n");
	}
	char b[10][100]={
			"         *******************************�����п�����ϵͳ��*************************************",
			"         *----------------------------------ϵͳ�˵�����---------------------------------------**",
			"         **1====================��          �¹���Ʒ���          ��===========================**",
			"         **2====================��          ��Ʒ��Ϣɾ��          ��===========================**",
			"         **3====================��          ��Ʒ��Ϣ�޸�          ��===========================**",
			"         **4====================��          ��Ʒ��Ϣ��ѯ          ��===========================**",
			"         **5====================��          ��Ʒ��Ϣ���          ��===========================**",
			"         **6====================��          ϵͳ��ɫ����          ��===========================**",
			"         **7====================��          Ӧ�ó����˳�          ��===========================**",
			"         ****************************************************************************************"
			};
	for(i=0;i<10;i++)
	printf("%s\n",b[i]);
}

void choo_se01()
{
	printf("��Ʒ�ı�ţ�\n");
	printf("��Ʒ�����ƣ�\n");
	printf("��Ʒ�Ĳ��أ�\n");
	printf("��Ʒ��������\n");
	printf("��Ʒ�ĵ��ۣ�\n");
	scanf("%d %s %s %d %d",&str[n].id,str[n].name,str[n].place,&str[n].number,&str[n].price);	
	n++;
	printf("��Ʒ��Ϣ�����ɹ���");
	printf("�Ƿ�Ҫ������⣡(y=��,�����Ƿ�)\n");
	char a;
	getchar();
	a=getchar();
	while(a=='y')
	{
		scanf("%d %s %s %d %d",&str[n].id,str[n].name,str[n].place,&str[n].number,&str[n].price);
		n++;
		printf("��Ʒ��Ϣ�����ɹ���");
		printf("�Ƿ�Ҫ������⣡(y=��,�����Ƿ�)\n");
		getchar();
		a=getchar();
	}
	system("cls");
	return;
}

void choo_se02()
{
	printf("������Ҫɾ����Ʒ����\n");
	char a='y';
	while(a=='y')
	{
		char arr[50];
		getchar();
		scanf("%s",arr);
		int i,j=0;
		for(i=0;i<n;i++)
		{
			if(!strcmp(arr,str[i].name))
			{
				memset(&str[i],0,sizeof(str[i]));
				printf("ɾ���ɹ�\n");
				j++;
			}
		}
		if(!j)
		{
			printf("�������\n");
		}
		getchar();
		printf("�Ƿ�Ҫ����ɾ��(y�����ǣ�������ڷ�)\n");
		scanf("%c",&a);
	}
	return;
}

void choo_se03()
{
	printf("������Ҫ�޸���Ʒ����\n");
	char a='y';
	while(a=='y')
	{
	char arr[50];
	getchar();
	scanf("%s",arr);
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(!strcmp(arr,str[i].name))
		{
			printf("��Ʒ�ı��:%d  ��Ʒ������:%s  ��Ʒ�Ĳ���:%s  ��Ʒ������:%d  ��Ʒ�ĵ���:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
			j++;
			printf("��ѡ��Ҫ�޸ĵ�ѡ��(1��Ʒ�ı�� 2��Ʒ������ 3��Ʒ�Ĳ��� 4��Ʒ������ 5��Ʒ�ĵ��� 6�˳�����Ʒ��Ϣ�޸�)\n");
			while(1)
			{
				int k;
				getchar();
				scanf("%d",&k);
				if(k==1)
				{				
					printf("���޸���Ʒ�ı�ţ�\n");
					getchar();
					scanf("%d",&str[i].id);
				}
				if(k==2)
				{
					char arr[50];
					printf("���޸���Ʒ�����ƣ�\n");
					getchar();
					scanf("%s",arr);
					strcpy(str[i].name,arr);
				}
				if(k==3)
				{
					char arr[50];
					printf("���޸���Ʒ�Ĳ��أ�\n");	
					getchar();
					scanf("%s",arr);
					strcpy(str[i].place,arr);
				}
				if(k==4)
				{
					printf("���޸���Ʒ��������\n");
					getchar();
					scanf("%d",&str[i].number);
				}
				if(k==5)
				{
					printf("���޸���Ʒ�ĵ��ۣ�\n");		
					getchar();
					scanf("%d",&str[i].price);
				}
				if(k==6)
				break;
				printf("�����ѡ���޸�����ѡ������˳�\n");
			}		
		}
	}
	if(!j)
	{
		printf("�������\n");
	}
	printf("�Ƿ�Ҫ�޸�������Ʒ(y�����ǣ�������ڷ�)\n");
	getchar();
	scanf("%c",&a);
	}	
	return;
}

void choo_se04()
{
	printf("������Ҫ��ѯ��Ʒ����\n");
	char a='y';
	while(a=='y')
	{
	char arr[50];
	getchar();
	scanf("%s",arr);
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(!strcmp(arr,str[i].name))
		{
			printf("��Ʒ�ı��:%d  ��Ʒ������:%s  ��Ʒ�Ĳ���:%s  ��Ʒ������:%d  ��Ʒ�ĵ���:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
			j++;
		}
	}
	if(!j)
	{
		printf("�������\n");
	}
	getchar();
	printf("�Ƿ�Ҫ������ѯ(y�����ǣ�������ڷ�)\n");
	scanf("%c",&a);
	}
	return;
}

void choo_se05()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(str[i].id!=0)
		printf("��Ʒ�ı��:%d  ��Ʒ������:%s  ��Ʒ�Ĳ���:%s  ��Ʒ������:%d  ��Ʒ�ĵ���:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
	}
	getchar();
	getchar();
}

void choo_se06()
{
	char arr[8][50]={
	"0=��ɫ      8=��ɫ",
	"1=��ɫ      9=����ɫ",
	"2=��ɫ      10=����ɫ",
	"3=ǳ��ɫ    11=��ǳ��ɫ",
	"4=��ɫ      12=����ɫ",
	"5=��ɫ      13=����ɫ",
	"6=��ɫ      14=����ɫ",
	"7=��ɫ      15=����ɫ"};
	int i;
	for(i=0;i<8;i++)
	printf("%s\n",arr[i]);
	printf("!!����ɫ��ǰ��ɫ�벻Ҫѡ��һ��\n");
	char a='y';
	while(a=='y')
	{
    int bg, fg;
    printf("��ѡ�񱳾�ɫ(0-15):\n");
    scanf("%d", &bg);
    printf("��ѡ��ǰ��ɫ(0-15):\n");
    scanf("%d", &fg);
    char command[50];
    sprintf(command, "color %x%x", bg, fg);
    system(command);
	getchar();
	printf("�Ƿ�Ҫ����������ɫ(y�����ǣ�������ڷ�)\n");
	scanf("%c",&a);
	}	
	return;
}

void choo_se07()
{
	printf("�Ƿ�Ҫ�˳�(y�����ǣ�������ڷ�)\n");
	getchar();
	char a;
	scanf("%c",&a);
	if(a=='y')
	{
		exit(0);
	}
	else
	{
		return;
	}
}
