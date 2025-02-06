#include <iostream>
using namespace std;
int main()
{

    int i = 100;
    int a, b;
    a = i++;    //first copy or use the value then increment it.
    cout << "Value of i while post-increment: " << a<< endl;
    cout << "Value of i after post-increment: " << i << endl;

    b = ++i;    //first increment the value then copy or use it.
    cout << "Value of i while pre-increment: " << b << endl;
    cout << "Value of i after pre-increment: " << i << endl;

    return 0;
}