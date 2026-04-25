class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ret;
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        vector<pair<int,int>> vec;
        for(auto p:mp){
            vec.push_back({p.second, p.first});
        }
        sort(vec.rbegin(), vec.rend());
        for(int i = 0; i < k; i ++){
            ret.push_back(vec[i].second);
        }
        return ret;
    }
};
