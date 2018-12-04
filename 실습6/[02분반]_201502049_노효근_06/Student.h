#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include "Person.h"

class Student : public Person
{
public:
	Student() {
		int grade = 0;
		int student_id = 0;
	}

	Student(char *name , int age, int grade, int student_id) : Person(name,age){
		this->grade = grade;
		this->student_id = student_id;
	}

	void print_S();


private:
	int grade;
	int student_id;
};

#endif // !STUDENT_H_

