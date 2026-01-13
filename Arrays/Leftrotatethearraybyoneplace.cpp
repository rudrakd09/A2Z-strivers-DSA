/*Left rotate the array by one place*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void LeftRotateByOne(vector<int>& arr){
        if(arr.empty()){
            return;
        }
        int temp = arr[0];
        for(int i=1; i<arr.size(); i++){
            arr[i-1] = arr[i];

        }
        arr[arr.size()-1]= temp;

    }
};
int main(){

    Solution solution;
    vector<int> arr={1,2,3,4,5};

    solution.LeftRotateByOne(arr);

    for(int arr : arr){
        cout<< arr<<" ";
    }
    return 0;
}