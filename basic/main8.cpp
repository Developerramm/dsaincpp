#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int r;
    cout << "Enter radius of circle : ";
    cin >> r;

    double areaOfCircle = 3.14 * r * r;

    cout << "Area of circle is " << round(areaOfCircle) << endl;

    return 0;
}