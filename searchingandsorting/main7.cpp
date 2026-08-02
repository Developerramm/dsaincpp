#include <iostream>
#include <vector>
using namespace std;

int divideTwoNumber(int dividend, int divisor)
{

    int s = 0;
    int e = abs(dividend);

    int mid = s + (e - s) / 2;

    int ans;

    while (s <= e)
    {
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor > dividend)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int dividend = 79;
    int divisor = 7;

    int ans = divideTwoNumber(dividend, divisor);

    cout << ans << endl;

    return 0;
}