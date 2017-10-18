#pragma once
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Student
{
protected:
	char* name;
	unsigned int Id;
	float credit;	//学分
	int grade;	//年级
public:
	Student();//默认构造函数
	Student(char* pS, unsigned int Id, float credit, int grade);//构造函数
	~Student();//析构函数
	virtual void display(ostream& out);//student输出
	
};
ostream& operator<<(ostream& out, Student& st);//重载插入运算符
