#include <iostream>
#include <cstring>
using namespace std;

void printArray(int *arr, int size){

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{

    int arr[10] = {1,2};
    printArray(arr,10);

    cout << endl;

    cout << "Size of array is " << sizeof(arr) / sizeof(int) << endl;

    memset(arr,-1,sizeof(arr));
    cout << "printing new array " << endl;
    printArray(arr,10);
    cout << endl;


    return 0;
}