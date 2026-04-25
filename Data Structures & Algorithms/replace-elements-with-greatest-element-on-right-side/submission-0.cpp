class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ret(arr.begin(), arr.end());
        int maxright = ret[ret.size()-1];
        for(int i = arr.size()-2; i >=0; i--)
        {
            maxright = max(maxright, arr[i+1]);
            ret[i] = maxright;
        }
        ret[ret.size()-1] = -1;
        return ret;
    }
};