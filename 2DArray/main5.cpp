#include <iostream>
#include <vector>
using namespace std;

void wavePrint(vector<vector<int>> arr)
{

    int rowCount = arr.size();
    int colCount = arr[0].size();

    int total = rowCount * colCount;

    int row = 0, col = 0;

    int count = 0;

    // wave print loop

    while (count < total)
    {

        row = 0;

        while (row < rowCount)
        {
            cout << arr[row][col] << " ";
            row++;
            count++;
        }

        col++;
        row = rowCount - 1;

        while (row >= 0)
        {
            cout << arr[row][col] << " ";
            row--;
            count++;
        }

        col++;
    }
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

    wavePrint(arr);

    return 0;
}