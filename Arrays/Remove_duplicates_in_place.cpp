/*To remove duplicates in place*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        if(nums.empty()){
            return 0;
        }
        int i = 0;
        for(int j = 1; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i]= nums[j];
            }
        }
        return i+1;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,1, 2,2, 3,4,5,5};
    int k = sol.removeDuplicates(nums);
    cout<<"The length of array after removing duplicates is: "<<k<<endl;
    cout<<"The array after removing duplicates is: ";
    for(int i=0; i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}