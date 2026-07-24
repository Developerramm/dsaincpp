#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

vector<int> instersection(vector<int> a, vector<int> b)
{
    vector<int> instersect;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                instersect.push_back(a[i]);
            }
        }
    }

    return instersect;
}

int main()
{

    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {3, 5, 6, 8, 10};

    vector<int> ans = instersection(a, b);

    printArray(ans);

    return 0;
}