class Jose
{
protected:
	int numMonkeys;
	int interval;
public:
	Jose(int Monkeys=10,int m=3)
	{
		numMonkeys =Monkeys;
		interval =m;
	}
	void Initial();
	void GetWinner();
};