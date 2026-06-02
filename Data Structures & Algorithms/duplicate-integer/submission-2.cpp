class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sex;
        for(int i : nums){
            if(sex.count(i) > 0){
                return true;
            }
            sex.insert(i);
        }
        return false;
    }
};