#include <iostream>
#include <cstring>
using namespace std;

int getLength(char name[]),</cstring>
{

    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

int main()
{

    char ch[100];
    cout << "Enter name : ";

    // cin >> ch;
    cin.getline(ch, 100);

    cout << "Length is " << getLength(ch) << endl;

    cout << strlen(ch) << endl;

    return 0;
}
