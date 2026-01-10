/* Quick sort*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void quicksort(vector<int> &arr, int low, int high){
        if(low < high){
            int pivotIndex = partition(arr,low, high);

            quicksort(arr, low, pivotIndex-1);
            quicksort(arr, pivotIndex+1, high);

        }

    }
    int partition(vector<int >& arr, int low, int high){
        int pivot = arr[high];
        int i = low;
        for(int j=low; j<high; j++){
            if(arr[j] < pivot){
                swap(arr[j], arr[i]);
            }
        }
        swap(arr[i+1], arr[high]);
        return i+1;
    }
};
int main(){
    vector<int> arr = {10,7,8,9,1,5};
    Solution sol;
    sol.quicksort(arr, 0 , arr.size()-1);
    
    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}