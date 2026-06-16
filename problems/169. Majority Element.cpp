#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mapa {};

        for(int i = 0 ; i < nums.size() ; ++i){
            mapa[nums[i]]++;
        }

        int maks = (*mapa.begin()).second;
        int el = (*mapa.begin()).first;
        for(auto x : mapa){
            if(maks < x.second){
                maks = x.second;
                el = x.first;
            } 
        }


        return el;
    }
};

int main() {
    vector<int> nums = {3, 2, 3};

    Solution solution;
    int rez = solution.majorityElement(nums);

	cout << rez << endl;
    

    return 0;
}
