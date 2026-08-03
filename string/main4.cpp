#include <iostream>
using namespace std;

int getLength(char name[])
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

void convertIntoUpper(char arr[])
{
    int n = getLength(arr);

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}



int main()
{

    char arr[100] = "ramkumar maniyari";

    convertIntoUpper(arr);

    cout << arr << endl;

    return 0;
}