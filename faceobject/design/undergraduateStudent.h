#pragma once
#include "student.h"
class undergraduateStudent :public Student
{
protected:
	char* tutor;
	char study[20];
public:
	undergraduateStudent();//无参构造函数
	undergraduateStudent(char *pS,unsigned num,float c,int g ,char* tutor,char* study);//构造函数定义
	undergraduateStudent(undergraduateStudent& uds); //拷贝构造函数的定义
	void display(ostream& out);//undergraduateStudent输出，重载
	//重载赋值运算符
	undergraduateStudent&operator=(undergraduateStudent & s)
	{
		cout << "undergraduateStudent正在重载赋值运算符\n";
		tutor = new char[strlen(s.tutor) + 1];
		if (tutor)
		{
			strcpy(tutor, s.tutor);
		}
		strcpy(study, s.study);
		name = new char[strlen(s.name) + 1];
		if (name)
		{
			strcpy(name,s.name);
		}
		Id =s.Id;
		credit = s.credit;
		grade = s.grade;

		return *this;
	}
	~undergraduateStudent();
	
};
ostream& operator<<(ostream& out_uds,undergraduateStudent& st);//重载插入运算符
