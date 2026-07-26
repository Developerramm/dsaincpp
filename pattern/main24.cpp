#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int rowCount = (n & 1 == 1) ? n / 2 + 1 : n / 2;

    for (int row = 0; row < rowCount; row++)
    {

        int col;
        cout << "* ";
        for (col = 0; col <= row; col++)
        {
            cout << col + 1 << " ";
        }

        col = col - 1;

        while (col != 0)
        {
            cout << col << " ";
            col--;
        }

        cout << "*";

        cout << endl;
    }

    return 0;
}