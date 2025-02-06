#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int numArr[10];
    int sum = 0, product = 1;
    cout << setw(10) << "Enter the numbers" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Number for " << i + 1 << ": ";
        cin >> numArr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (numArr[i] % 2 == 0)
            sum += numArr[i];
        else
            product *= numArr[i];
    }

    cout << "Sum of even numbers : " << sum << endl;
    cout << "Product of odd numbers : " << product;

    return 0;
}