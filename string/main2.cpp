#include <iostream>
using namespace std;

void replaceSpace(string &str)
{

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            str[i] = '@';
        }
    }
}

int main()
{

    string name = "My name is ram kumar";

    cout << name << endl;

    replaceSpace(name);

    cout << name << endl;

    return 0;
}