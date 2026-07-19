#include <iostream>
using namespace std;

int sumOfEvenNumber(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{

    int n;
    cout << "Enter a number to get sum : ";
    cin >> n;

    int sum = sumOfEvenNumber(n);
    cout << "The sum is " << sum << endl;

    return 0;
}