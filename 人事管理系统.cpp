/* 
����Ϣ��¼�룺����ְ���Ļ�����Ϣ�����š��������Ա�ְ���š��������ڡ���ַ�ȣ���
ְ������������Ϣ�����ű�š�ְ���š���ע�ȣ���ְ��������Ϣ��ְ���š�ְ�����ơ�ְ���ʣ�
����Ϣ���޸ģ���ְ����Ϣ�����仯ʱ�����ڶ���Ϣ�����޸ġ�
����Ϣ�Ĳ��룺��ģ����Ҫ������������ְ������Ϣ��
����Ϣ��ɾ������ģ�����Ҫ����ʱɾ��ְ����Ϣ��  
����Ϣ�Ĳ�ѯ����ģ���ṩ��ѯ����ĳһ���������µ����Ľ��棬Ҫ��������ֲ�ѯ��ʽ��һ���ǰ��������ң���һ���ǰ�ְ���Ų��ҡ�
*/
#include<stdio.h>
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
			case'a':add(e);break;
//			case'b':Delete();break;
//			case'c':modify();break;
//			case'd':print();break;
		}
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
/*��Ϣ��¼�룺����ְ���Ļ�����Ϣ�����š��������Ա�ְ���š��������ڡ���ַ�ȣ���
ְ������������Ϣ�����ű�š�ְ���š���ע�ȣ���ְ��������Ϣ��ְ���š�ְ�����ơ�ְ���ʣ�
*/
void add(employee p[])
{
	printf("\t������ְ���Ļ�����Ϣ\n");
	printf("\t���ţ�");
	scanf("%d",&p->number);
	printf("\t������");
	scanf("%s",&p->name);
	printf("\t�Ա�");
	scanf("%c",&p->sex); 
	printf("\tְ���ţ�");
	scanf("%s",&p->OfficialID);
	printf("\t�������ڣ�");
	scanf("%s",&p->birthday);
	printf("\t��ַ��");
	scanf("%s",&p->address);
	printf("\tְ������������Ϣ\n");
	printf("\t���ű�ţ�");
	scanf("%s",&p->DeptID);
	printf("\t��ע��");
	scanf("%s",&p->remark);
	printf("\tְ��������Ϣ\n");
	printf("\tְ�����ƣ�");
	scanf("%s",&p->OfficialName);
	printf("\tְ���ʣ�");
	scanf("%s",&p->wages);
}
