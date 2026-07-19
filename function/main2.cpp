#include <iostream>
using namespace std;

int maxInTreeNumber(int number1, int number2, int number3)
{
    if (number1 >> number2 && number1 > number3)
    {
        return number1;
    }
    else if (number2 > number1 && number2 > number3)
    {
        return number2;
    }
    else
    {
        return number3;
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter three number : ";
    cin >> n1 >> n2 >> n3;

    int max = maxInTreeNumber(n1, n2, n3);
    cout << "Max number is " << max << endl;

    return 0;
}