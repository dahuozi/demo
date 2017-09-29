#include<iostream>
using namespace std;
void maopao(int a[], int size);
void main()
{
	int a[] = { 214,4354,436,657,3,7,30,7999,46 };
	maopao(a, 9);
	for (int i = 0; i < 9; i++)
	{
		cout << a[i] << "-";
	}
	system("pause");
}
void maopao(int a[], int size)
{
	int temp;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j <size - i; j++)
		{
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}