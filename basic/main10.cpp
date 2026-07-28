#include <iostream>
#include "assert.h"
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";

    cin >> n;

    assert(n <= 12);

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "Factorial of given number is " << factorial << endl;

    return 0;
}