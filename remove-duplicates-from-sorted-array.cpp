#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i=0,j=0;
      for(;j<nums.size();j++)
      {
        if(nums[i]!=nums[j])
        {
            swap(nums[i+1],nums[j]);
            i++;
        }
      }
      return i+1;
    }
};
