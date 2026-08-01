#include <iostream>
#include <vector>
using namespace std;

int binarySearchIn2DArray(vector<vector<int>> &arr, int target)
{

    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    int s = 0;
    int e = row * col - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (arr[rowIndex][colIndex] == target)
        {
            return arr[rowIndex][colIndex];
        }
        else if (arr[rowIndex][colIndex] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{

    vector<vector<int>> arr;
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {5, 6, 7, 8};
    vector<int> c = {9, 10, 11, 12};
    vector<int> d = {13, 14, 15, 16};
    vector<int> e = {17, 18, 19, 20};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    arr.push_back(e);

    int target = 19;

    int ans = binarySearchIn2DArray(arr, target);

    cout << "your ans is " << ans << endl;

    return 0;
}