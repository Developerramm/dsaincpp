#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v;
    cout << "vector declared " << endl;

    vector<int> a{1, 2, 3, 4};
    vector<int> b{2, 4, 5, 5};
    vector<int> c{9, 8, 7, 5};

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}