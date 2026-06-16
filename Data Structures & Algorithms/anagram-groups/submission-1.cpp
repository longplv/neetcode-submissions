class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        unordered_map<string,vector<string>> mp;
        for(string idx :  strs){
            string sortedS = idx;
            sort(sortedS.begin(), sortedS.end());
            mp[sortedS].push_back(idx);
        }
        for(auto p:mp){
            ret.push_back(p.second);
        }
        return ret;
    }
};
