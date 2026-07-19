#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        int count;
        for (int col = 0; col < row + 1; col++)
        {
            count = row + col + 1;
            cout << count;
        }

        for(int col = count -1; col>row; col--){
            cout << col;
        }

        cout << endl;
    }

    return 0;
}