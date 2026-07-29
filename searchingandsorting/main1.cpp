#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 90};

    if (binary_search(v.begin(), v.end(), 4))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    int arr[] = {1, 2, 3, 4, 5, 6, 8, 90, 100};
    int n = 9;

    if (binary_search(arr, arr + n, 101))
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}