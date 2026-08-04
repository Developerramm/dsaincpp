#include <iostream>
#include <string>
using namespace std;

string removeAdjacentChar(string &str)
{
    int n = str.length();
    string ans = "";
    int i = 1;

    while (i <= n)
    {
        if (str[i] != str[i - 1])
        {
            ans = ans + str[i - 1];
        }
        i++;
    }

    return ans;
}

string remove1(string str)
{

    cout << "statrt " << endl;

    string ans = "";
    int i = 0;

    while (i < str.length())
    {

        if (ans.length() > 0)
        {
            if (ans[ans.length() - 1] == str[i])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(str[i]);
            }
        }
        else
        {
            ans.push_back(str[i]);
        }

        i++;
    }

    cout << "samapt" << endl;

    return ans;
}

int main()
{

    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    // string ans = removeAdjacentChar(str);
    string ans = remove1(str);
    cout << ans << endl;

    return 0;
}