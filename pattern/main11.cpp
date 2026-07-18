#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        for (int star = 0; star < row + 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}