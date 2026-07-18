#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        char ch = 'A';
        int col;
        for (col = 0; col < row + 1; col++)
        {
            cout << char(ch + col) << " ";
        }

        for (int j = col - 2; j >= 0; j--)
        {
            cout << (char)(ch + j) << " ";
        }

        cout << endl;
    }

    return 0;
}