/* Largest element in an array*/
#include <bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n){
    int Largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > Largest){
            Largest = arr[i];
        }
    }
    return Largest;
};
int main(){
    int arr[] = {34, 67, 23, 89, 2, 45};
    int n = 6;
    int Largest = findLargest(arr, n);
    cout<<"The largest element in the array is : "<<Largest <<endl;
    return 0;
}