#include <iostream>
#include "assert.h"
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 1;
    assert(n <= 4);
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col & 1 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << count++;
            }
        }
        cout << endl;
    }

    int start = count - n;
    for (int row = 0; row < n; row++)
    {

        int k = start;

        for (int col = 0; col <= n - row - 1; col++)
        {
            cout << k;
            if (col != n - row - 1)
            {
                cout << "*";
            }
            k++;
        }
        start = start - (n - row - 1);
        cout << endl;
    }

    return 0;
}