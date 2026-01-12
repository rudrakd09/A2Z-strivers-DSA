/* to fnd second largest and smallest element in an array*/
#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    if(n<2){
        return -1;
    }
    int Largest = INT_MIN;
    int SecondLargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> Largest){
            SecondLargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i] > SecondLargest && arr[i] != Largest){
            SecondLargest = arr[i];
        }
        return SecondLargest;

    }
}
int secondSmallest(int arr[], int n){
    if(n<2){
        return -1;
    }
    int Smallest = INT_MAX;
    int SecondSmallest = INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<Smallest){
            SecondSmallest = Smallest;
            Smallest = arr[i];
        }
        else if(arr[i]< SecondSmallest && arr[i]!= Smallest){
            SecondSmallest = arr[i];
        }
        return SecondSmallest;
    }
}
int main(){
    int arr[]= {23, 45, 12, 67, 34, 89, 90};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int SL = secondLargest(arr, n);
    int SS = secondSmallest(arr, n);

    cout<<"The second Largest element in the array is : "<<SL<<endl;
    cout<<"The second Smallest element in the array is : "<<SS<<endl;
    return 0;
}