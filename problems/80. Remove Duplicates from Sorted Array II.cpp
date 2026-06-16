#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int prev = INT_MIN;
        int prevprev = INT_MIN;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(!(nums[i] == prev && prev == prevprev)){
                nums[k] = nums[i];
                prevprev = prev;
                prev = nums[i];
                ++k;
            }
        }

        return k;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};

    Solution solution;
    solution.removeDuplicates(nums);

    for (int x : nums) {
        cout << x << ' ';
    }

    return 0;
}
