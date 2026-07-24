#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}

vector<int> unionOfArray(vector<int> a, vector<int> b)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        ans.push_back(b[i]);
    }

    return ans;
}

int main()
{

    cout << (0 ^ 1) << endl;
    cout << (0 ^ 0) << endl;

    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    vector<int> ans = unionOfArray(a, b);

    printArray(ans);

    return 0;
}