#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int entry=prices[0];
        int exit;
        for(int i=1;i<prices.size();i++)
        {
            if(i==prices.size()-1 &&prices[i]>prices[i-1])
              {
                 exit=prices[i];
                  profit+=exit-entry;
              }
              else if(i==prices.size()-1)
              {
                 break;
              }
            else if(prices[i]>prices[i-1] && prices[i]>=prices[i+1])
            {
                exit=prices[i];
                profit+=exit-entry;
            } else if (prices[i]<=prices[i-1] && prices[i]<=prices[i+1])
             {
                entry=prices[i];
             }  
        }
        return profit;
    }
};
class better_solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int start = prices[0];
        int len = prices.size();
        for(int i = 1;i<len; i++){
            if(start < prices[i]){
                max += prices[i] - start;
            }
            start = prices[i];
        }
        return max;
    }
};