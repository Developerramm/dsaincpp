#include <iostream>
using namespace std;

int addTwoNumber(int number1, int number2)
{

    return number1 + number2;
}

int main()
{

    int num1, num2;
    cout << "Enter two number : ";
    cin >> num1 >> num2;

    int sum = addTwoNumber(num1, num2);

    cout << "The sum is " << sum << endl;

    return 0;
}