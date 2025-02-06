#include <iostream>
using namespace std;
int main()
{

    int num;
    bool isPrime = false;

    cout << "Enter the number: ";
    cin >> num;

    if (num % 2 == 0){
        isPrime = false;
    }

    return 0;
}