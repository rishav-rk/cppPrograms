#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, d, e, expression, result;

    cout << "Enter value of a, b, c, d, e: ";
    cin >> a >> b >> c >> d >> e;

    expression = a + b * c - d / e;
    result = pow(expression, 2);
    cout << fixed << setprecision(2);
    cout << "Result: " << result << endl;
    return 0;
}
