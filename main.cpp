#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "student.h"
#include <map>

using namespace std;

void showMenu(){
    cout << "1. Insertion\n" << "2. searcht\n" << "3. sorting Option\n" << "4. Exit\n";
}
int selectMenu(){
    int selectedMenu;
    cin >> selectedMenu;
    return selectedMenu;
}
int insert(vector<Student>& students);
int search(vector<Student>& students);
int sortFunc(vector<Student>& students);

int main() {
    int menu;
    vector<Student> students; // 이해 필요

    while(menu != 4){
        showMenu();
        menu = selectMenu();
        cout << "from func selctMenu tells " << menu << '\n';

        if(menu == 1){
            insert(students);
        }
        else if(menu == 2){
            search(students);
        }
        else if(menu == 3){
            sortFunc(students);
        }

        else{
            cout << "Exit!\n";
        }
    }
    return 0;
}

int insert(vector<Student>& students) {

    //vector 만들어서 파일에 넣을 때 벡터에도 같이 넣어주기!
    ofstream infile("/Users/rocket/univ-22-2/객체지향프로그래밍/1차과제/prob2/file1.txt", ios_base::in | ios_base::out | ios_base::app); //파일 읽기
    if(infile.is_open()){

        cin.ignore(); // /n (개행 문자) 때문에, 첫번째 getline에서 \n만 받아 버린것을 확인할 수 있다. cin.ignor() 필요

        cout << "Name: ";
        string name;
        getline(cin, name);
        infile << name << ',';      
      
        cout << "Student ID: ";
        string studentID;
        getline(cin, studentID);
        infile << studentID << ',';
      
        cout << "Birth Year: ";
        string birth;
        getline(cin, birth);
        infile << birth << ',';
        
        cout << "Department: ";
        string department;
        getline(cin, department);
        infile << department << ',';
     
        cout << "Tel: ";
        string tel;
        getline(cin, tel);
        infile << tel << '\n';

        students.push_back(Student(name, studentID, birth, department, tel));
     

        infile.close();
    }
    else{
    infile.open("/Users/rocket/univ-22-2/객체지향프로그래밍/1차과제/prob2/file1.txt");
    }

    return 0;
}

/*int search(vector<Student>& students){
    cout << "search function starts\n";
    // search by department
    for(auto student : students) {
        if(student.getDepartment() == "com"); {
            std::cout << "Name: " << std::endl;
        }
    }
    return 0;
}
*/

/*int sortFunc(vector<Student>& students){
    cout << "sort function starts\n";
    //sort
    sort(students.begin(), students.end(), [](Student a, Student b) {
        return a.getName() > b.getName();
    });
    return 0;
}*/

