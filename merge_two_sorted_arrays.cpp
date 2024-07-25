class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialize pointers
        int i = 0;  // Pointer for nums1
        int j = 0;  // Pointer for nums2

        // Perform the swapping to position elements correctly
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                swap(nums1[i], nums2[j]);
                // Maintain sorted order in nums2
                j++;
            }
            i++;
        }
                sort(nums2.begin(), nums2.end()); // This is to keep nums2 sorted


        // Copy the remaining elements from nums2 into nums1
        i = m; // Reset i to the end of the valid elements in nums1
        j=0;
        while (j < n) {
            nums1[i++] = nums2[j++];
        }
    }
};
