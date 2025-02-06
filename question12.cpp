//CONSTRUCTORS AND DESTRUCTORS
/*
    Create a class Car with attributes brand, model and year.
        1) Implement a constructor to initialize these attributes
        2) Implement a destructor that prints a message when object is destroyed.
        3) Create objects inside and outside block and observe when teh destrutor is called.
*/
#include<iostream>
using namespace std;

class Car{

    string brand;
    string model;
    int year;
    public:
    Car(string cbrand, string cmodel, int cyear){
        brand = cbrand;
        model = cmodel;       
        year = cyear;
        cout << "++++-------- Created --------++++" << endl;
    }
    void getData(){
        cout  << brand << " " << model << " \nYear : " << year << endl;
    }
    ~ Car(){
        cout << "xxxx-------- Destroyed --------xxxx" << endl;
    }
};
int main(){

    Car c1("Toyota", "Supra MK 4", 1999);
    c1.getData();

    return 0;
}