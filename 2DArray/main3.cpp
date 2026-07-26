#include <iostream>
using namespace std;

int maxElement(int arr[][3], int row, int col)
{
    int max = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

void transpose(int arr[][3], int row, int col, int temparr[][3])
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temparr[j][i] = arr[i][j];
        }
    }
}

void print2Darray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 3, 5}, {19, 23, 45}, {233, 443, 90}};

    int ans = maxElement(arr, 3, 3);

    cout << ans << endl;

    int temparr[3][3];

    print2Darray(arr, 3, 3);
    transpose(arr, 3, 3, temparr);
    print2Darray(temparr, 3, 3);

    return 0;
}