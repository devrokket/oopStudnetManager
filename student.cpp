#include "student.h"

Student::Student(string name, string studentID, string birth, string department, string tel) {
	this->name = name;
	this->studentID = studentID;
	this->birth = birth;
	this->department = department;
    this->tel = tel;
}

Student::~Student(){}

