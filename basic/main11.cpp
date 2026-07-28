#include <iostream>
using namespace std;

bool checkPrime(int number)
{
    for (int i = 2; i < number; i++)
    {

        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    bool ans = checkPrime(n);

    if (ans)
    {
        cout << "Number is prime" << endl;
    }
    else
    {
        cout << "Number is not prime " << endl;
    }

    return 0;
}