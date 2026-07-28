#include <iostream>
using namespace std;

float celciusToKalvin(int celcius)
{
    float kalvin = 273.15 + celcius;
    return kalvin;
}

float celciusToFahrenheit(int celcius)
{
    float fahrenheit = (celcius * 9 / 5) + 32;

    return fahrenheit;
}

int main()
{

    int n;
    cout << "Enter temperature in celcius : ";
    cin >> n;

    float k = celciusToKalvin(n);
    float f = celciusToFahrenheit(n);

    cout << "C = " << n << " " << "f" << " " << f << " k =" << k << endl;

    return 0;
}