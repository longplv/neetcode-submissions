class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> tmp;
        for(string str: strs){
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            tmp[sorted].push_back(str);
        }
        vector<vector<string>> ret;
        for(auto p : tmp){
            ret.push_back(p.second);
        }
        return ret;
    }
};
