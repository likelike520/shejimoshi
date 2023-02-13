#include<iostream>
using namespace std;




class Bankworker
{
public:
	void save()
	{
		cout << "��Ǯ" << endl;
	}

	void  move()
	{
		cout << "ת��" << endl;
	}
};


class AbBanker
{
public:
	virtual void dothing() = 0;
};

class saver :public AbBanker
{
public:
	void dothing()
	{
		cout << "��Ǯ" << endl;
	}
};

class mover :public AbBanker
{
public:
	void dothing()
	{
		cout << "ת��" << endl;
	}
};


class AdvMover :public AbBanker
{
public:
	void dothing()
	{
		cout << "���� ת��" << endl;
	}

};

int main()
{
	AbBanker* abbanker = new mover;

	abbanker->dothing();
	delete abbanker;
	abbanker = new AdvMover;
	abbanker->dothing();
	delete abbanker;
	return 0;
}