class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    int finalDest=n-1;
    for(int idx=n-2;idx>=0;idx--)
     {
         if(idx+nums[idx]>=finalDest)
         finalDest=idx;
     }
     return finalDest==0;
    }
};