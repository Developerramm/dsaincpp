#include <iostream>
using namespace std;

void reverseString(string &s)
{
    int i = 0;
    int e = s.length() - 1;

    while (i <= e)
    {
        swap(s[i], s[e]);
        i++;
        e--;
    }
}

int main()
{

    string name = "Ram kumar";
    cout << name.length() << endl;
    cout << name << endl;

    reverseString(name);

    cout << name << endl;

    return 0;
}