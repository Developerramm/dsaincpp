#include <iostream>
#include <vector>
using namespace std;

int squareRoot(int n)
{

    int s = 0, e = n;

    int m = s + (e - s) / 2;

    int ans = -1;

    while (s <= e)
    {

        if (m * m == n)
        {
            return m;
        }
        else if (m * m > n)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int ans = squareRoot(n);

    cout << ans << endl;

    return 0;
}