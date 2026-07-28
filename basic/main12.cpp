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

    // print all prime

    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        bool ans = checkPrime(i);
        if (ans)
        {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;

    cout << "All count is " << count << endl;

    return 0;
}