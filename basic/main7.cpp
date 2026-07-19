#include <iostream>
using namespace std;

int main()
{

    int val;
    cout << "Enter a value : ";

    cin >> val;

    switch (val)
    {

    case 1:
        cout << "Ram kumar ";
        break;
    case 2:
        cout << "Maniyari ";
        break;
    case 3:
        cout << "logical reasoning class ";
        break;
    default:
        cout << "Time pass ";
    }

    return 0;
}