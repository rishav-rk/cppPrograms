#include<bits/stdc++.h>
#define PI 3.14285714

using namespace std;
double areaCircle(double);
double circumferenceCircle(double);

int main()
{
    double radius;

    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << fixed << setprecision(2);
    cout << "Area: " << areaCircle(radius) << "\nCircumference: " << circumferenceCircle(radius) << endl;

    return 0;
}

double areaCircle(double r){
    return PI * pow(r,2);
}
double circumferenceCircle(double r){
    return 2 * PI * r;
}