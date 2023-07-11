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
int choose_number;//用于操作选项的数字
int n=0;//表示库里有多少商品

void wel_come();//欢迎页面
void choo_se00();//选择菜单
void choo_se01();//新购商品入库
void choo_se02();//物品信息删除
void choo_se03();//物品信息修改
void choo_se04();//物品信息查询
void choo_se05();//物品信息浏览
void choo_se06();//程序颜色更改
void choo_se07();//应用程序退出

int main ()
{
	memset(str,0,sizeof(str));
	str[0].id=1;
	strcpy(str[0].name,"苹果");
	strcpy(str[0].place,"烟台");
	str[0].number=20;
	str[0].price=3;
	n++;
	wel_come();
	choo_se00();	
	while(1)
	{
		printf("请输入下一步操作\n");
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
	"*                                       欢迎使用                                      *",
	"*                                                                                     *",
	"*-------------------------------------------------------------------------------------*",
	"*                                                                                     *",
	"*                                                                                     *",
	"*                                     超市库管理系统                                  *",
	"*                                                                                     *",
	"*-------------------------------------------------------------------------------------*",
	"*                                                                                     *",
	"*                                      按任意键退出                                   *",
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
			"         *******************************【超市库存管理系统】*************************************",
			"         *----------------------------------系统菜单如下---------------------------------------**",
			"         **1====================【          新购商品入库          】===========================**",
			"         **2====================【          物品信息删除          】===========================**",
			"         **3====================【          物品信息修改          】===========================**",
			"         **4====================【          物品信息查询          】===========================**",
			"         **5====================【          物品信息浏览          】===========================**",
			"         **6====================【          系统颜色更改          】===========================**",
			"         **7====================【          应用程序退出          】===========================**",
			"         ****************************************************************************************"
			};
	for(i=0;i<10;i++)
	printf("%s\n",b[i]);
}

void choo_se01()
{
	printf("物品的编号：\n");
	printf("物品的名称：\n");
	printf("物品的产地：\n");
	printf("物品的数量：\n");
	printf("物品的单价：\n");
	scanf("%d %s %s %d %d",&str[n].id,str[n].name,str[n].place,&str[n].number,&str[n].price);	
	n++;
	printf("物品信息已入库成功！");
	printf("是否要继续入库！(y=是,其余是否)\n");
	char a;
	getchar();
	a=getchar();
	while(a=='y')
	{
		scanf("%d %s %s %d %d",&str[n].id,str[n].name,str[n].place,&str[n].number,&str[n].price);
		n++;
		printf("物品信息已入库成功！");
		printf("是否要继续入库！(y=是,其余是否)\n");
		getchar();
		a=getchar();
	}
	system("cls");
	return;
}

void choo_se02()
{
	printf("请输入要删除商品名字\n");
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
				printf("删除成功\n");
				j++;
			}
		}
		if(!j)
		{
			printf("输入出错\n");
		}
		getchar();
		printf("是否要继续删除(y等于是，其余等于否)\n");
		scanf("%c",&a);
	}
	return;
}

void choo_se03()
{
	printf("请输入要修改商品名字\n");
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
			printf("物品的编号:%d  物品的名称:%s  物品的产地:%s  物品的数量:%d  物品的单价:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
			j++;
			printf("请选择要修改的选项(1物品的编号 2物品的名称 3物品的产地 4物品的数量 5物品的单价 6退出该商品信息修改)\n");
			while(1)
			{
				int k;
				getchar();
				scanf("%d",&k);
				if(k==1)
				{				
					printf("请修改物品的编号：\n");
					getchar();
					scanf("%d",&str[i].id);
				}
				if(k==2)
				{
					char arr[50];
					printf("请修改物品的名称：\n");
					getchar();
					scanf("%s",arr);
					strcpy(str[i].name,arr);
				}
				if(k==3)
				{
					char arr[50];
					printf("请修改物品的产地：\n");	
					getchar();
					scanf("%s",arr);
					strcpy(str[i].place,arr);
				}
				if(k==4)
				{
					printf("请修改物品的数量：\n");
					getchar();
					scanf("%d",&str[i].number);
				}
				if(k==5)
				{
					printf("请修改物品的单价：\n");		
					getchar();
					scanf("%d",&str[i].price);
				}
				if(k==6)
				break;
				printf("请继续选择修改其他选项或者退出\n");
			}		
		}
	}
	if(!j)
	{
		printf("输入出错\n");
	}
	printf("是否要修改其他商品(y等于是，其余等于否)\n");
	getchar();
	scanf("%c",&a);
	}	
	return;
}

void choo_se04()
{
	printf("请输入要查询商品名字\n");
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
			printf("物品的编号:%d  物品的名称:%s  物品的产地:%s  物品的数量:%d  物品的单价:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
			j++;
		}
	}
	if(!j)
	{
		printf("输入出错\n");
	}
	getchar();
	printf("是否要继续查询(y等于是，其余等于否)\n");
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
		printf("物品的编号:%d  物品的名称:%s  物品的产地:%s  物品的数量:%d  物品的单价:%d\n",str[i].id,str[i].name,str[i].place,str[i].number,str[i].price);
	}
	getchar();
	getchar();
}

void choo_se06()
{
	char arr[8][50]={
	"0=黑色      8=灰色",
	"1=蓝色      9=淡蓝色",
	"2=绿色      10=淡绿色",
	"3=浅绿色    11=淡浅绿色",
	"4=红色      12=淡红色",
	"5=紫色      13=淡紫色",
	"6=黄色      14=淡黄色",
	"7=白色      15=淡白色"};
	int i;
	for(i=0;i<8;i++)
	printf("%s\n",arr[i]);
	printf("!!背景色和前景色请不要选成一样\n");
	char a='y';
	while(a=='y')
	{
    int bg, fg;
    printf("请选择背景色(0-15):\n");
    scanf("%d", &bg);
    printf("请选择前景色(0-15):\n");
    scanf("%d", &fg);
    char command[50];
    sprintf(command, "color %x%x", bg, fg);
    system(command);
	getchar();
	printf("是否要继续更改颜色(y等于是，其余等于否)\n");
	scanf("%c",&a);
	}	
	return;
}

void choo_se07()
{
	printf("是否要退出(y等于是，其余等于否)\n");
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
