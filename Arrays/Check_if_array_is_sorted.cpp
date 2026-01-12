/*To check if the array is sorted*/
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]< arr[i-1]){
            return false;
        }

    }
    return true;
};
int main(){
    int arr[] = {12, 23, 34, 45 , 56, 76};
    int n = sizeof(arr)/ sizeof(arr[0]);
    if(isSorted(arr, n)){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
    
}