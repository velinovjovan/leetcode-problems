#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() == 0){
            return 0;
        }

        int currmin = prices[0];
        int maksProfit = INT_MIN;

        for(int i = 1 ; i < prices.size() ; ++i){
            maksProfit = max(maksProfit, prices[i] - currmin);

            if(prices[i] < currmin){
                currmin = prices[i];
            }
        }

        return max(maksProfit, 0);
    }
};

int main() {
    vector<int> nums = {7, 1, 5, 3, 6, 4};

    Solution solution;
    int profit = solution.maxProfit(nums);

	cout << profit << endl;
    

    return 0;
}
