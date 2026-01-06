/*Reverse a given array */
#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int left, int right){
    if(left>=right){
        return;
    }else{
        swap(arr[left], arr[right]);

        ReverseArray(arr, left +1, right-1);
    }

};
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    return 0;
}