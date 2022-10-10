#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class Student{ //클래스 정의
private:
    string name;
    string studentID;
    string birth;
    string department;
    string tel;

public:
    Student(); //생성자
    Student(string name, string StudentID, string birth, string department, string tel); //매개변수 선언
    ~Student();
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setStudentID(string StudentID){
        this->studentID = StudentID;
    }
    string getStudentID(){
        return studentID;
    }

    void setBirth(string birth){
        this->birth = birth;
    }
    string getBirth(){
        return birth;
    }

    void setDepartment(string department){
        this->department = department;
    }
    string getDepartment(){
        return department;
    }
    void setTel(string tel){
        this->tel = tel;
    }
    string getTel(){
        return tel;
    }
    
};