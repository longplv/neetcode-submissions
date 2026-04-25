class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        unordered_map<int, int> mp2;
        for(int i = 0; i < nums2.size();i++){
            mp2[nums2[i]] = i;
        }
        for(int i = 0; i < nums1.size(); i ++){
            ret.push_back(mp2[nums1[i]]);
        }
        return ret;
    }
};
