#include <iostream>
using namespace std;

int main()
{

    cout << "Enter marks : ";
    int marks;
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "A Grade " << endl;
    }
    else if (marks >= 80 && marks <= 89)
    {
        cout << "B grade " << endl;
    }
    else if (marks >= 60 && marks <= 79)
    {
        cout << "C grade " << endl;
    }
    else if (marks >= 40 && marks <= 59)
    {
        cout << "D grade " << endl;
    }
    else if (marks > 100)
    {
        cout << "Enter valid marks " << endl;
    }
    else
    {
        cout << "F grade " << endl;
    }

    return 0;
}