#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a number : ";
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }

        for (int star = 0; star < n - row; star++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}