#include<iostream>
#include"ring.h"
#include"josex.h"
using namespace std;

void Jose::Initial()
{
	int num,m;
	cout<<"请输入猴子的数量:";
	cin>>num;
	
		if(num<=0)
	{
		cerr<<"你输入的猴子数量错误！"<<endl;
		return;
	}
	cout<<"\n请输入猴子间隔数:";
	cin>>m;
	if(m<=0&&m>num)
	{
		cerr<<"你输入的数到猴子的个数错误"<<endl;
		return;
	}
	numMonkeys = num;
	interval = m;
}
void Jose::GetWinner()
{
	Ring x(numMonkeys);
	x.Count(0);

	for(int i=1;i<numMonkeys;i++)
	{
		x.Count(interval);
		//x.PutMonkey();
		x.ClearMonkey();
	}
	cout<<"\n大王是：";
	x.PutMonkey();
	cout<<endl;
}
