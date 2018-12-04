#pragma once
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>


class Person
{
public:

	Person() {
		*name = {0,};
		int age = 0;
	}

	Person(char* name, int age) {
		strcpy_s(this->name ,name);
		this->age = age;
	}

	void print_P();


private:

	char name[50];
	int age;

};


#endif // !PERSON
