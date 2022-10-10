#include "student.h"

Student::Student() {

}

Student::Student(string name, string StudentID, string birth, string department, string tel) {
	this->name = name;
	this->studentID = studentID;
	this->birth = birth;
	this->department = department;
    this->tel = tel;
}

Student::~Student(){}