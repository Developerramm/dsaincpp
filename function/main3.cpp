#include <iostream>
using namespace std;

void printCounting(int number)
{

    for (int i = 1; i <= number; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter a number to print counting : ";
    cin >> n;

    printCounting(n);

    return 0;
}