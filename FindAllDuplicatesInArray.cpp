#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        
        // Count the frequency of each number in the array
        for (auto it : nums) {
            mpp[it]++;
        }
        
        // Traverse the map and push elements that occur more than once into the ans vector
        for (auto& pair : mpp) {
            if (pair.second > 1) {
                ans.push_back(pair.first);
            }
        }
        
        return ans;
    }
};