#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 7};

    cout << "array created and initialized" << endl;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}