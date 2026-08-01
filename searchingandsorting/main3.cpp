#include <iostream>
#include <vector>
using namespace std;


int findPeakElement(vector<int> &arr){
    int s = 0; 
    int e = arr.size() - 1;

    int m = s + (e - s) / 2;
    int ans = -1;

    while(s<=e){

        if(arr[m] > arr[m-1] && arr[m] > arr[m+1]){
            ans =  m;
            return ans;
        }else if(arr[m] > arr[m-1] && arr[m] <arr[m+1]){
            s = m+1;
        }else{
            e = m;
        }
        m = s + (e - s) / 2;
    }

    return ans;
}

int main(){

    vector<int> arr = { 10, 20, 15, 2, 23, 90, 80};
    // cout << arr.size() << endl;

    int ans = findPeakElement(arr);
    cout << ans << endl;


    return 0;
}