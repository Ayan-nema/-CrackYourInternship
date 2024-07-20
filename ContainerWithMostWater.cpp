class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       int left=0,right=n-1;
       int maxvol=INT_MIN;
       while(left<right){
        int diff=right-left;
        int vol=min(height[left],height[right]) * diff; 
       maxvol=max(maxvol,vol);
       if(height[left]<height[right])left++;
       else right--;
       }
       return maxvol;
    }
};