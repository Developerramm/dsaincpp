#include <iostream>
using namespace std;

int expendAroundIndex(string s, int i, int j)
{

    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }

    return count;
}

int main()
{

    string str = "abc";

    int count = 0;

    int n = str.length();

    for (int i = 0; i < n; i++)
    {

        // odd

        int oddKaAns = expendAroundIndex(str, i, i);
        count = count + oddKaAns;

        // even
        int evenKaAns = expendAroundIndex(str, i, i + 1);

        count = count + evenKaAns;
    }

    cout << count << endl;

    return 0;
}