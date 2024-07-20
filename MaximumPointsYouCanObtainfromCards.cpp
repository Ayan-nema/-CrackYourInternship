class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int windowSum = accumulate(cardPoints.begin(), cardPoints.begin() + (n - k), 0);
        int minWindowSum = windowSum;

        for (int i = 0; i < k; ++i) {
            windowSum = windowSum - cardPoints[i] + cardPoints[n - k + i];
            minWindowSum = min(minWindowSum, windowSum);
        }

        return totalSum - minWindowSum;
    }
};
