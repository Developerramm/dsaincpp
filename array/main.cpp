#include <iostream>
using namespace std;

int main()
{

    // array declaration

    int arr[7];
    cout << "array created successfully." << endl;

    cout << arr << endl;

    cout << &arr << endl;
    cout << &arr[0] << endl;

    int arr1[53];
    char ch[107];
    bool bol[23];

    // initialization of array

    int brr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "array initialized" << endl;

    return 0;
}