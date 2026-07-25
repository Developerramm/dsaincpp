#include <iostream>
#include <vector>
using namespace std;

void findPairsum(vector<int> arr, int sum)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int sum = 12;

    findPairsum(arr, sum);

    return 0;
}