#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool compareString(string a, string b)
{

    if (a.length() != b.length())
    {
        return false;
    }
    else
    {

        // int i = 0;
        // int j = 0;

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
            // j++;
        }

        return true;
    }
}

int main()
{

    // create string
    string str;

    // cin >> str;
    // take input in string
    getline(cin, str);

    // print string
    cout << str << endl;

    cout << str.length() << endl;

    cout << str.empty() << endl;
    str.push_back('@');

    cout << str << endl;

    cout << str.substr(0, 6) << endl;

    cout << str << endl;

    string str1 = "Ram kumar";
    string str2 = "Ram kumar";

    if (compareString(str1, str2))
    {
        cout << "String are equal " << endl;
    }
    else
    {
        cout << "String are not equals " << endl;
    }

    return 0;
}