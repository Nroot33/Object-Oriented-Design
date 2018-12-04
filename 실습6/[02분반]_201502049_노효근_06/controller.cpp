#include "Person.h"
#include "Student.h"
#include <iostream>
using namespace std;

int main() {


char name[50];
int age;
int grade;
int student_id;

cout << "name : ";
cin >> name;
cout << "age : ";
cin >> age;
cout << "grade : ";
cin >> grade;
cout << "student_id: ";
cin >> student_id;

Student student( name, age, grade, student_id);
student.print_P();
student.print_S();

}