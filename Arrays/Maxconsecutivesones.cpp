/* To count the maximum number of ones in an array*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxConsecutiveOnes(vector<int>& nums){
        int Count = 0;
        int Maximum = 0;
        for(int i=0; i< nums.size();i++){
            if(nums[i] == 1){
                Count++;
            }
            else{
                Count = 0;
            }
            Maximum = max(Maximum, Count);
        }
        return Maximum;
    }
};
int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    Solution obj;
    int ans = obj.maxConsecutiveOnes(nums);

    cout << "The maximum consecutive 1's are " << ans;
    return 0;
}
