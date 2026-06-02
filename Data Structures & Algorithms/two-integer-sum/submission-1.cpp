class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i  = 0; i < nums.size(); i++){
            int check = target - nums[i];
            if(mp.count(check) > 0){
                return{mp[check],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
