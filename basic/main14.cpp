#include <iostream>
using namespace std;

int main()
{

    int number = 10;
    int k = 2;

    // set kth bit
    int temp = (1 << k);
    int ans = (temp | number);

    cout << ans << endl;

    return 0;
}