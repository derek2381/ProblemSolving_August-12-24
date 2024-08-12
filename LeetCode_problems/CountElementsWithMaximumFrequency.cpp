// problem link
// https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }

        int max = 0, res = 0;
        for(auto i : mp){
            if(i.second > max){
                max = i.second;
            }
        }

        for(auto i : mp){
            if(i.second == max){
                res += i.second;
            }
        }

        return res;
    }
};
