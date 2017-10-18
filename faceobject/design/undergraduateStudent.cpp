#include"undergraduateStudent.h"
undergraduateStudent::undergraduateStudent(undergraduateStudent& uds)//拷贝构造函数的实现
{
	cout << "调用undergraduateStudent的拷贝构造函数\n";
	name = new char[strlen(uds.name) + 1];
	if (name) 
	{
		strcpy(name, uds.name);
	}
	Id = uds.Id;
	credit = uds.credit;
	grade = uds.grade;
	tutor = new char[strlen(uds.tutor) + 1];
	if (tutor)
	{
		strcpy(tutor, uds.tutor);
	}
	
	strcpy(study, uds.study);
}
undergraduateStudent::undergraduateStudent(char *pS, unsigned num, float c, int g, char* udtutor, char* udstudy)//构造函数实现
{
	name = new char[strlen(pS) + 1];
	if (name)
	{
		strcpy(name, pS);
	}
	Id = num;
	credit = c;
	grade = g;
	tutor = new char[strlen(udtutor) + 1];
	if (tutor)
	{
		strcpy(tutor,udtutor);
	}
	strcpy(study, udstudy);

}
void undergraduateStudent::display(ostream& out_uds)
{
	out_uds << name << "," << Id << "," << credit << "," << grade << "," << tutor << "," << study;
}
undergraduateStudent::~undergraduateStudent()
{
	if (name)
	{
		delete name;
		name = 0;
	}
	if (tutor)
	{
		delete tutor;
		tutor = 0;
	}
}
undergraduateStudent::undergraduateStudent()//无参构造函数实现
{
	name = 0;
	tutor = 0;
}
/*
重载插入运算符ostream& operator<<(ostream&out_uds, undergraduateStudent& uds)
调用了undergraduate的成员display()，以此来完成输出任务，它自己不必是友元
*/
ostream& operator<<(ostream&out_uds, undergraduateStudent& uds)
{
	uds.display(out_uds);
	out_uds << endl;
	return out_uds;
}
