#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>> arr)
{

    int row = arr.size();
    int col = arr[0].size();

    int total = row * col;
    int top = 0, left = 0, right = col - 1, bottom = row - 1;
    int count = 0;

    while (count < total)
    {

        for (int i = 0; i <= right; i++)
        {
            cout << arr[top][i] << " ";
            count++;
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
            count++;
        }
        right--;

        for (int i = right; i >= left; i--)
        {
            cout << arr[bottom][i] << " ";
            count++;
        }

        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
            count++;
        }

        left++;
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

    spiralPrint(arr);

    return 0;
}