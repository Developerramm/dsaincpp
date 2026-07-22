#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 0, 0, 0, 1, 0, 1, 1, 0};

    int size = 9;

    int zerocount = 0;
    int onecount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        else
        {
            onecount++;
        }
    }

    cout << endl;
    cout << "number of zero is " << zerocount << endl;

    cout << "number of one count is " << onecount << endl;

    return 0;
}