#include <iostream>
using namespace std;

double PI = 3.14;

int main(){

    // declare a variable a
    int a;
    // initialize and delcare variable b
    int b = 5;

    // variable b is updated
    b = 10;

    cout << PI << endl;

    if(true){
        // local variable for this block
        int b = 12;
        cout << b << endl;
        cout << PI << endl;
    }

    cout << b << endl;


    return 0;
}