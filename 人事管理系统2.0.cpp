/* 
����Ϣ��¼�룺����ְ���Ļ�����Ϣ�����š��������Ա�ְ���š��������ڡ���ַ�ȣ���
ְ������������Ϣ�����ű�š�ְ���š���ע�ȣ���ְ��������Ϣ��ְ���š�ְ�����ơ�ְ���ʣ�
����Ϣ���޸ģ���ְ����Ϣ�����仯ʱ�����ڶ���Ϣ�����޸ġ�
����Ϣ�Ĳ��룺��ģ����Ҫ������������ְ������Ϣ��
����Ϣ��ɾ������ģ�����Ҫ����ʱɾ��ְ����Ϣ��  
����Ϣ�Ĳ�ѯ����ģ���ṩ��ѯ����ĳһ���������µ����Ľ��棬Ҫ��������ֲ�ѯ��ʽ��һ���ǰ��������ң���һ���ǰ�ְ���Ų��ҡ�
*/
#include<stdio.h>
#include<stdlib.h>
#define LEN  sizeof(struct employee ) 
struct employee
{
	int number;//���� 
    char name[20];//����
    char sex;//�Ա�f or m
    char OfficialID[10];//ְ����
	char birthday[21];//���� 
	char address[20];//��ַ 
	char DeptID[20];//���ű�� 
	char remark[100];//��ע
	char OfficialName[20];//ְ������
	int wages;//ְ���� 
	struct employee *next; 
};
void displaymenu()
{
	printf("\t\t\t��ӭʹ�����¹���ϵͳ\n\n");
	printf("\t****************************************************");
	printf("\n\t* a)¼����Ϣ\t\t\t");
	printf("\tb)�޸���Ϣ *\n");
	printf("\t* c)������Ϣ\t\t\t");
	printf("\td)ɾ����Ϣ *\n");
	printf("\t* e)��ѯ\t\t\t");
	printf("\tf)�˳�     *\n");
	printf("\t****************************************************\n");
	printf("\t���������ѡ��");
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
	head=current=(employee *)malloc(LEN); /* ����һ��ͷ���*/ 
	last=(employee *)malloc(LEN);   /* ����һ�����ݽ��*/ 
	fscanf(fp,"%d %s %c %s %s %s %s %s %s %d",&last->number,&last->name,&last->sex,&last->OfficialID,&last->birthday,&last->address,&last->DeptID,&last->remark,&last->OfficialName,&last->wages); 
	while(last->number!=0)
	{  /* ѧ��Ϊ0 ��ʾ�����������*/ 
		current->next=last; 
		current=last; 
		last=(employee *)malloc(LEN);/* ����һ�������ݽ��*/ 
		fscanf(fp,"%d %s %c %s %s %s %s %s %s %d",&last->number,&last->name,&last->sex,&last->OfficialID,&last->birthday,&last->address,&last->DeptID,&last->remark,&last->OfficialName,&last->wages); 
		
	} 
		current->next=NULL; 
		free(last); 
		return head; /* ��������ı�ͷ*/ 
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
void del(employee * head, int num) 
{ 
	employee *p,*temp; 
	p=head->next;
//	printf("%d",p->number); 
	for(;p!=NULL;p=p->next)   /*qָ�������ĵ�һ����㵽β��� */
	{
		if(p->number==num)
			break; 	
	}
	if(p==NULL) 
		printf("�޴�����Ϣ");
	p=head;
	while(p->next !=NULL  &&  p->next->number != num) 
		p=p->next;
	temp=p->next;
	if(p->next!=NULL)
	{   
		p->next=temp->next;
		free(temp); 
	} 

}
int main()
{
	employee *em,*head=NULL; 
	//head=create();
	char choice;
	displaymenu();
	do
	{
		
		scanf("%c",&choice);
		switch(choice)
		{
			case'a':head=create();printf("\n\t��Ϣ¼�����\n");system("PAUSE");system("cls");break;	
			case'd':del(head,1);system("PAUSE");system("cls");break;
//			case'c':modify();break;
//			case'd':print();break;
		}
//		fflush(stdin);//������������� 
		displaymenu();
		scanf("%c",&choice);
	}while(choice!='f'); 
	print(head);
 } 
