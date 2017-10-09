#include<iostream>
#include<iomanip>
#include "ring.h"
using namespace std;

Ring::Ring(int n)
{
	pBegin = new Monkey[n]; //分配猴子结构数组
	pCurrent = pBegin;
	
	for(int i=1;i<=n;i++,pCurrent = pCurrent->next)
	{
		
		pCurrent->next = pBegin	+i%n;	//将节点链接起来
		
		pCurrent->code = i; //猴子编号
		
		//PutMonkey();
		
	}
	cout<<endl;
	
	pCurrent = &pBegin[n-1];	//当前猴子位置在最后一个编号

}
void::Ring::Count(int m)
{
	for(int i=0;i<m;i++)
	{
		pivot = pCurrent;
		pCurrent = pivot ->next;
	}
}
void Ring::PutMonkey()
{
	cout<<pCurrent->code;
}
void Ring::ClearMonkey()
{
	pivot->next=pCurrent->next;
	pCurrent=pivot;
}

Ring::~Ring()
{
	delete[] pBegin;
}
