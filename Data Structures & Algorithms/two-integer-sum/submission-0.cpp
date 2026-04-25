class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            int checkout = target - nums[i];
            if(mp.count(checkout) > 0){
                return {mp[checkout],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
