/* 
①信息的录入：包括职工的基本信息（工号、姓名、性别、职务编号、出生日期、地址等）、
职工所属部门信息（部门编号、职务编号、备注等）、职工工资信息（职务编号、职务名称、职务工资）
②信息的修改：当职工信息发生变化时，便于对信息进行修改。
③信息的插入：该模块主要功能是输入新职工的信息。
④信息的删除：该模块的主要功能时删除职工信息。  
⑤信息的查询：该模块提供查询符合某一条件的人事档案的界面，要求包括两种查询方式，一种是按姓名查找，另一种是按职工号查找。
*/
#include<stdio.h>
struct employee
{
	int number;//工号 
    char name[20];//姓名
    char sex;//性别：f or m
    char OfficialID[10];//职务编号
	char birthday[21];//生日 
	char address[20];//地址 
	char DeptID[20];//职务编号 
	char remark[100];//备注
	char OfficialName[20];//职务名称
	int wages;//职务工资 

};
int main()
{
	
 } 
