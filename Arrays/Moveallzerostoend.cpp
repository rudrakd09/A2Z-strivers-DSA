/*Move all the zeros to the end of the array*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void MoveZeros(vector<int>& nums){
        int j = -1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]== 0){
                j=i;
                break;
            }
        }
        if(j == -1) return ;

        for(int i = j+1; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
int main(){
   Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    sol.MoveZeros(nums);

    // Print the result
    for (int num : nums) cout << num << " ";
    cout << endl;
    return 0; 
}