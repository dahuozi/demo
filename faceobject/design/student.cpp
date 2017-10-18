#include"student.h"
Student::Student()
{
	name = 0;
}
Student::~Student()
{
	if (name)
	{
		delete name;
		name = 0;
	}
	name = 0;
}
Student::Student(char* pS, unsigned int uid, float ucredit, int ugrade)
{
	name = new char[strlen(pS) + 1];
	if (name)
	{
		strcpy(name, pS);
	}
	Id = uid;
	credit = ucredit;
	grade = ugrade;
}
void Student::display(ostream& out)
{
	out << name <<","<<Id<<","<< credit<<","<< grade;
}
ostream& operator<<(ostream&out, Student&st)
{
	st.display(out);
	out << endl;
	return out;
}
