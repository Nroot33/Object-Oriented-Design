#include "User.h"

void C::printDay()
{
	//cout << "신정" << endl;
	cout << this->month << ". " << this->day << ". " << this->memo << endl;
}

void A::printDay()
{
	cout<<schedule.month<<". "<<schedule.day<<". "<<schedule.memo<<endl;
	//cout << "크리스마스!" << endl;
}

B::B()
{
	month		= 12;
	day			= 25;
	memo		= "크리스마스";
}

void B::printDay()
{
	C::printDay();
}

void DD::printDay()
{
	cout << "DD day" << endl;
}

void BB::printDay()
{
	cout << "BB day" << endl;
}

int main(void)
{
	C* _c = new C(5,12,"부처님오신날");
	C* _b = new B();

	A _a(*_c);

	_a.printDay();
	_b->printDay();


	DD* _bb = new BB();
	_bb->printDay();

	return 0;
}

