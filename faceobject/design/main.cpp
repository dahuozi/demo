#include"student.h"
#include"undergraduateStudent.h"
void main()
{
	ofstream out("c:\\2016214194\\student.txt");
	Student s1("赵绪浪",2016214194,3.5,2016);
	out << s1;
	ofstream out_uds("c:\\2016214194\\undergraduateStudent.txt");
	undergraduateStudent s2("赵绪浪",2016214194,3.5,2016,"cqupt","soft");
	out_uds << s2;
	undergraduateStudent s3 = s2;//体现拷贝构造函数
	undergraduateStudent s4;
	s4 = s2;//体现赋值运算符

}
