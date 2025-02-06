//UNDERSTANDING CLASSES AND OBJECTS
/*Create a class Student with attributes name, age and grade. Write a program to:
    1) Create and object of the STudent class
    2) Assign values to the attributes
    3) Display the student details using a member function.
*/
#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    char grade;
    public:
    void setName(string sname){
        name = sname;
    }
    void setAge(int sage){
        age = sage;
    }
    void setGrade(char sgrade){
        grade = sgrade;
    }

    void getData(){
        cout << "------------------------" << endl;
        cout << "NAME : " << name << endl;
        cout << "AGE :  " << age << endl;
        cout << "GRADE : " << grade << endl;
        cout << "------------------------";
    }

};
using namespace std;
int main(){

    Student s1;
    s1.setName("John Carter");
    s1.setAge(25);
    s1.setGrade('A');
    s1.getData();
    return 0;
}