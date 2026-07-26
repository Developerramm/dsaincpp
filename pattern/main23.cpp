#include <iostream>
#include "assert.h"
using namespace std;

int main(){
    
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int count = 1;
    assert(n<=4);
    for(int row = 0; row<n; row++){
        for(int col = 0; col<2*row + 1; col++){
            if(col & 1==1){
                cout << "*";
            }else{
                cout << count++;
            }
        }
        cout<< endl;
    }
    cout << count << endl;

    for(int row = 0; row<n; row++){

        for(int col = 0; col<2 * n - 2*row - 1; col++){
            
        }
    }



    return 0;
}