#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 4};
    cout << arr.size() << endl;
    cout << "capacity of vector " << arr.capacity() << endl;

    if (arr.empty())
    {
        cout << "vector is empty " << endl;
    }
    else
    {
        cout << "Vector is not empty " << endl;
    }

    cout << "last element is " << arr.at(arr.size() - 1) << endl;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    cout << "last element is " << arr.at(arr.size() - 1) << endl;

    cout << "size of vector is " << arr.size() << endl;
    arr.pop_back();

    cout << "size of vector is " << arr.size() << endl;

    cout << arr.max_size() << endl;

    cout << arr.front() << endl;
    cout << arr.back() << endl;

    // printing vector using while loop
    while (!arr.empty())
    {
        cout << arr.back() << " ";
        arr.pop_back();
    }

    cout << endl;

    vector<int> v(10, 0);
    // printing vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
