#ifndef USESR_H_
#define USESR_H_

#include <iostream>
#include<string>
using namespace std;

class DD
{
public:
	int		month;
	int		day;
	string	memo;

public:
	DD(void) :month(10), day(3), memo("개천절") {};
	// 기본 생성자

	void printDay();
};

class C
{
public:
	int		month;
	int		day;
	string	memo;

public:
	C(void) :month(1), day(1), memo("신정") {};
	// 기본 생성자
	
	C(int _month, int _day, string _mem) :
		month(_month), day(_day), memo(_mem) {};
	// 생성자 오버로딩

	virtual void printDay();
};

class A
{
private:
	C schedule;

public:
	A(C _schedule) : schedule(_schedule) {};
	void printDay();
	

};

class B : public C
{
public:
	B();
	virtual void printDay();

};

class BB :public DD
{
public:
	void printDay();

};

#endif // !USESR_H_
