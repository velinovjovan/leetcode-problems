#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int mov = 0;
        int prev = INT_MIN;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i] != prev){
                nums[mov] = nums[i];
                mov++;
            }

            prev = nums[i];
        }

        return mov;
    }
};

int main() {
    vector<int> nums = {1, 1, 2};

    Solution solution;
    int size = solution.removeDuplicates(nums);

    for (int i = 0 ; i < size ; ++i) {
        cout << nums[i] << ' ';
    }
    

    return 0;

}
