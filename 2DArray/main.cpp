#include <iostream>
using namespace std;

int main()
{

    // 2d array creation
    int arr[3][3];

    // 2d array initialization
    int brr[3][3] = {
        {1, 2, 3},
        {5, 7, 9},
        {2, 4, 6}};

    cout << brr[2][2] << endl;
    cout << brr[1][1] << endl;
    cout << brr[0][2] << endl;

    // outer loop
    // row wise print
    cout << "printing row wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        // inner loop
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing column wise " << endl;

    // column wise print
    for (int i = 0; i < 3; i++)
    {
        // inner loop
        for (int j = 0; j < 3; j++)
        {
            cout << brr[j][i] << " ";
        }
        cout << endl;
    }


    

    return 0;
}