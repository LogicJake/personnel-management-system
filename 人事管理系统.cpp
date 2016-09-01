/* 
①信息的录入：包括职工的基本信息（工号、姓名、性别、职务编号、出生日期、地址等）、
职工所属部门信息（部门编号、职务编号、备注等）、职工工资信息（职务编号、职务名称、职务工资）
②信息的修改：当职工信息发生变化时，便于对信息进行修改。
③信息的插入：该模块主要功能是输入新职工的信息。
④信息的删除：该模块的主要功能时删除职工信息。  
⑤信息的查询：该模块提供查询符合某一条件的人事档案的界面，要求包括两种查询方式，一种是按姓名查找，另一种是按职工号查找。
*/
#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int number;//工号 
    char name[20];//姓名
    char sex;//性别：f or m
    char OfficialID[10];//职务编号
	char birthday[21];//生日 
	char address[20];//地址 
	char DeptID[20];//部门编号 
	char remark[100];//备注
	char OfficialName[20];//职务名称
	int wages;//职务工资 

};
void add(employee p[]);
void print();
void modify();

void Delete();
void displaymenu(); 
int main()
{
	employee e[100];
	char choice;
	do
	{
		displaymenu();
		scanf("%c",&choice);
		switch(choice)
		{
			case'a':
			{	
				add(e);
				printf("\t继续输入请按‘y’，结束输入请按‘n’：");
				char choice_two;
				scanf("%c",&choice_two);
				while(choice_two =='y')
				{
					add(e);
					printf("\t继续输入请按‘y’，结束输入请按‘n’:");
					scanf("%c",&choice_two);
					fflush(stdin);//清空输入区缓存 ;
				}
				system("cls");
				break;
			}
			
//			case'b':Delete();break;
//			case'c':modify();break;
//			case'd':print();break;
		}
		displaymenu();
		fflush(stdin);//清空输入区缓存 
		scanf("%c",&choice);
	}while(choice !='e');
 } 
void displaymenu()
{
	printf("\t\t\t欢迎使用人事管理系统\n\n");
	printf("\t****************************************************");
	printf("\n\t* a)录入信息\t\t\t");
	printf("\tb)修改信息 *\n");
	printf("\t* c)插入信息\t\t\t");
	printf("\td)删除信息 *\n");
	printf("\t* e)查询\t\t\t");
	printf("\tf)退出     *\n");
	printf("\t****************************************************\n");
	printf("\t请输入你的选择：");
}
void add(employee p[])
{
	int i;
	for(i=0;i++;i<100) 
	{
		
	}
	printf("\t请输入职工的基本信息\n");
	printf("\t工号：");
	scanf("%d",&p->number);
	fflush(stdin);//清空输入区缓存
	printf("\t姓名：");
	scanf("%s",&p->name); 
	fflush(stdin);//清空输入区缓存 ;
	printf("\t性别：");
	scanf("%c",&p->sex); 
	fflush(stdin);//清空输入区缓存 
	printf("\t职务编号：");
	scanf("%s",&p->OfficialID);
	fflush(stdin);//清空输入区缓存
	printf("\t出生日期：");
	scanf("%s",&p->birthday);
	fflush(stdin);//清空输入区缓存
	printf("\t地址：");
	scanf("%s",&p->address);
	fflush(stdin);//清空输入区缓存
	printf("\n\t职工所属部门信息\n");
	printf("\t部门编号：");
	scanf("%s",&p->DeptID);
	fflush(stdin);//清空输入区缓存
	printf("\t备注：");
	scanf("%s",&p->remark);
	fflush(stdin);//清空输入区缓存
	printf("\n\t职工工资信息\n");
	printf("\t职务名称：");
	scanf("%s",&p->OfficialName);
	fflush(stdin);//清空输入区缓存
	printf("\t职务工资：");
	scanf("%s",&p->wages);
	fflush(stdin);//清空输入区缓存
}
