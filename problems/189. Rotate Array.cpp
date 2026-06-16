#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> numscopy (nums.size());

        for(int i = 0 ; i < nums.size() ; ++i){
            numscopy[i] = nums[i];
        }

        for(int i = 0 ; i < nums.size() ; ++i){
            nums[(i + k) % nums.size()] = numscopy[i];
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    Solution solution;
    solution.rotate(nums, 3);

	for(auto x : nums){
		cout << x << ' ';
	}
    

    return 0;
}
