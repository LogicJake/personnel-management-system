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
				printf("\t���������밴��y�������������밴��n����");
				char choice_two;
				scanf("%c",&choice_two);
				while(choice_two =='y')
				{
					add(e);
					printf("\t���������밴��y�������������밴��n��:");
					scanf("%c",&choice_two);
					fflush(stdin);//������������� ;
				}
				system("cls");
				break;
			}
			
//			case'b':Delete();break;
//			case'c':modify();break;
//			case'd':print();break;
		}
		displaymenu();
		fflush(stdin);//������������� 
		scanf("%c",&choice);
	}while(choice !='e');
 } 
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
void add(employee p[])
{
	int i;
	for(i=0;i++;i<100) 
	{
		
	}
	printf("\t������ְ���Ļ�����Ϣ\n");
	printf("\t���ţ�");
	scanf("%d",&p->number);
	fflush(stdin);//�������������
	printf("\t������");
	scanf("%s",&p->name); 
	fflush(stdin);//������������� ;
	printf("\t�Ա�");
	scanf("%c",&p->sex); 
	fflush(stdin);//������������� 
	printf("\tְ���ţ�");
	scanf("%s",&p->OfficialID);
	fflush(stdin);//�������������
	printf("\t�������ڣ�");
	scanf("%s",&p->birthday);
	fflush(stdin);//�������������
	printf("\t��ַ��");
	scanf("%s",&p->address);
	fflush(stdin);//�������������
	printf("\n\tְ������������Ϣ\n");
	printf("\t���ű�ţ�");
	scanf("%s",&p->DeptID);
	fflush(stdin);//�������������
	printf("\t��ע��");
	scanf("%s",&p->remark);
	fflush(stdin);//�������������
	printf("\n\tְ��������Ϣ\n");
	printf("\tְ�����ƣ�");
	scanf("%s",&p->OfficialName);
	fflush(stdin);//�������������
	printf("\tְ���ʣ�");
	scanf("%s",&p->wages);
	fflush(stdin);//�������������
}
