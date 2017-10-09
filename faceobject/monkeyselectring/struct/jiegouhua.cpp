//http://www.cnblogs.com/croot/p/3525322.html
#include<iostream>
#include<iomanip>
using namespace std;
struct Jose //猴子结构
{
	int code;	//猴子编号
	Jose* next;	//用于只想下一个猴子节点
};
int n;	//猴子数
int m; //间隔数
Jose* pivot;	//链表哨兵
Jose* pCur;		//当前节点指针

int assign();	//赋初值，返回1：成功，0：失败
void initial(Jose* pMonkey);
void count(int m);	//数m个猴子
void process();		//处理所有踢出的猴子

int	main()
{
	if(!assign())
	{
		cout<<"赋初值失败"<<endl;
		return 0;
	}
	
	Jose* pJose =new Jose[n];	//分配结构数组
	initial(pJose);		//初始化结构数组
	count(0);	//转到开始位置
	process();		//处理所有踢出的猴子
	
	cout<<"\n大王是："<<pCur->code<<endl;
	
	delete[] pJose;
	return 0;
}
int assign()
{
	int number,count;
	cout<<"请输入猴子的数量：";
	cin>>number;
	cout<<"\n请输入数到猴子的个数：";
	cin>>count;
	if(number<=0)
	{
		cerr<<"你输入的猴子数量错误！"<<endl;
		return 0;
	}
	if(count<=0&&count>number)
	{
		cerr<<"你输入的数到猴子的个数错误"<<endl;
		return 0;
	}
	n = number;
	m = count;
	return 1;
}
void initial(Jose* pJose)
{
	Jose* px =pJose;
	
	for(int i=1;i<=n;i++)
	{
		px->next = pJose +i%n;
		px->code =i;
		px=px->next;
	}
	cout<<endl;
	pCur = pJose+n -1;
}
//数m个猴子
void count(int m)
{
	for(int i=0;i<m;i++)
	{
		pivot = pCur;
		pCur =pivot->next;
	}
}
//处理所有踢出的猴子
void process()
{
	int l =0;
	for(int i =1;i<n-1;i++)
	{
		count(m);	//数m个猴子
		pivot->next =pCur->next;//猴子脱链
		pCur = pivot;
	}
}