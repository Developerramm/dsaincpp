#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }

        int count;
        for (count = 0; count < row + 1; count++)
        {
            cout << count + 1 << " ";
        }

        for (int count2 = count - 1; count2 > 0; count2--)
        {
            cout << count2 << " ";
        }

        cout << endl;
    }

    return 0;
}