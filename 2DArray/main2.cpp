#include <iostream>
using namespace std;

bool findKey(int arr[][3], int row, int col, int element)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == element)
            {

                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[3][3] = {{5, 6, 8}, {7, 2, 9}, {1, 6, 9}};

    // linear search in 2d array

    int element = 11;

    bool ans = findKey(arr, 3, 3, element);

    if (ans)
    {
        cout << "element found " << endl;
    }
    else
    {
        cout << "element not found " << endl;
    }

    return 0;
}