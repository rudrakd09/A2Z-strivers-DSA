/*Selection sort*/
#include <bits/stdc++.h>
using namespace std;

void Selectionsort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int mini = i;
        for(int j= i+1; j<n-1;j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }

        }
        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i]= temp;

    }
    cout<<"After selection sort the array is: "<<"\n ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before selection sort the array is:"<<"\n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    Selectionsort(arr, n);

    return 0;
}