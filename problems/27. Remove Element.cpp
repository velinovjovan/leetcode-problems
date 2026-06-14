#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int mov = 0;

        for (int i = 0 ; i < nums.size() ; ++i) {
            if (nums[i] != val) {
                nums[mov] = nums[i];
                ++mov;
            }
        }

        return mov;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};

    Solution solution;
    int size = solution.removeElement(nums, 3);

    for (int i = 0 ; i < size ; ++i) {
        cout << nums[i] << ' ';
    }
    

    return 0;

}
