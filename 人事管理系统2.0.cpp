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
#define LEN  sizeof(struct employee ) 
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
	struct employee *next; 
};
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
employee  *create()
{  
	FILE *fp;
	if((fp=fopen("information.txt","r"))==NULL) 
	{   
		printf("cannot open file\n"); 
		exit(0); 
	} 
	employee *head,*current,*last;
	head=current=(employee *)malloc(LEN); /* 申请一个头结点*/ 
	last=(employee *)malloc(LEN);   /* 申请一个数据结点*/ 
	fscanf(fp,"%d %s %c %s %s %s %s %s %s %d",&last->number,&last->name,&last->sex,&last->OfficialID,&last->birthday,&last->address,&last->DeptID,&last->remark,&last->OfficialName,&last->wages); 
	while(last->number!=0)
	{  /* 学号为0 表示建立链表结束*/ 
		current->next=last; 
		current=last; 
		last=(employee *)malloc(LEN);/* 申请一个新数据结点*/ 
		fscanf(fp,"%d %s %c %s %s %s %s %s %s %d",&last->number,&last->name,&last->sex,&last->OfficialID,&last->birthday,&last->address,&last->DeptID,&last->remark,&last->OfficialName,&last->wages); 
		
	} 
		current->next=NULL; 
		free(last); 
		return head; /* 返回链表的表头*/ 
	} 
void  print(employee * head) 
{ 
	employee *p;
	p=head->next; 
	if(p!=NULL)
	{ 
		while(p!=NULL)
		{ 
			printf("\tNumber=%d,name=%s\n", p->number,p->name); 
			p=p->next; 
		} 
	} 
} 
void modify(employee * head)
{
	char choice;
	int num;
	printf("\t请输入你要修改职工的编号：");
	fflush(stdin);//清空输入区缓存 
	scanf("%d",&num); 
	employee *p;
	p=head->next;
	for(;p!=NULL;p=p->next)   
	{
		if(p->number==num)
		{
			printf("\t工号：%d\n\t姓名：%s\n",p->number,p->name);
			break;
		}
	}
	if(p==NULL) 
		printf("\t无此人信息!\n");
	else
	{
		printf("\t确认修改吗？(y or n)");
		fflush(stdin);//清空输入区缓存
		scanf("%c",&choice); 
		if(choice=='y')
		{
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
	
	}
} 
void del(employee * head) 
{ 
	int num;
	char choice;
	printf("\t请输入你要删除职工的编号：");
	scanf("%d",&num); 
	employee *p,*temp; 
	p=head->next;
	for(;p!=NULL;p=p->next)   
	{
		if(p->number==num)
		{
			printf("\t工号：%d\n\t姓名：%s\n",p->number,p->name);
			break;
		}
			 	
	}
	if(p==NULL) 
		printf("\t无此人信息!\n");
	else
	{
		p=head;
		fflush(stdin);//清空输入区缓存
		printf("\t确认删除吗？(y or n)");
		scanf("%c",&choice);
		fflush(stdin);//清空输入区缓存 
		if(choice=='y')
		{
			while(p->next !=NULL  &&  p->next->number != num) 
			p=p->next;
			temp=p->next;
			if(p->next!=NULL)
			{   
				p->next=temp->next;
				free(temp); 
			} 
		}
		
	}
	
}
int main()
{
	employee *em,*head=NULL; 
	char choice;
	displaymenu();
	while(1)
	{
		scanf("%c",&choice);
		switch(choice)
		{
			case'a':head=create();printf("\n\t信息录入完毕\n");system("PAUSE");system("cls");displaymenu();break;	
			case'b':modify(head);displaymenu();break;
			case'd':del(head);system("PAUSE");system("cls");displaymenu();break;
//			case'c':modify();break;
//			case'd':print();break;
			case'f':print(head);exit(1);
		}
		
	}		
 } 
