#include <iostream>
using namespace std;

int main()
{

    int score;

    cout << "Enter the score : ";

    cin >> score;
    
    if (score < 300)
    {
        cout << "India wins the match" << endl;
    }
    else
    {
        cout << "England wins the match " << endl;
    }

    // int a = 5;
    // cout<< "Value of a is " << a << endl;

    // cout<< &a << endl;

    // cout << "Namaste Bharat" << endl;

    // int n;
    // cout <<"Enter a number : ";
    // cin >> n;
    // cout <<"Your number is " << n << endl;

    return 0;
}