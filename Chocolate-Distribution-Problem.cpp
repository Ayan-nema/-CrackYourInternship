#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findMinDiff(vector<long long> a, long long n, long long m) {

        sort(a.begin(), a.end());

        long long minDiff = LLONG_MAX;
  
        for (int i = 0; i < n - m + 1; i++) {
  
            long long diff = a[i + m - 1] - a[i];
           
            minDiff = min(minDiff, diff);
        }


        return minDiff;
    }
};