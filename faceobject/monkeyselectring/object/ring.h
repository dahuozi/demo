struct Monkey
{
	int code;
	Monkey* next;
};
class Ring
{
	public:
		Ring(int n);
		void Count(int m);//数m个猴子
		void PutMonkey();	//输出当前猴子的编号
		void ClearMonkey();	//将当前猴子从链表中脱掉
		~Ring();
	protected:
		Monkey* pBegin;
		Monkey* pivot;
		Monkey* pCurrent;
};

	