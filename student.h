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
    //C++에서 생성자(Constructor)를 이용해 객체를 생성함과 동시에 멤버 변수를 초기화 할 수 있다. 
    //생성자는 특별한 메소드로 클래스 이름과 동일한 이름으로 구현된다.
    
    Student(string name, string studentID, string birth, string department, string tel): name(name), studentID(studentID), birth(birth), department(department), tel(tel) {}; //매개변수 선언
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }

    void setStudentID(string studentID){
        this->studentID = studentID;
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