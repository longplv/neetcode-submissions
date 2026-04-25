class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret;
        for(int i = 0 ; i <= n; i++){
            int cnt = 0;
            int idx = i;
            while(idx!=0){
                cnt += (idx & 1);
                idx = idx >> 1;
            }
            ret.push_back(cnt);
        }
        return ret;
    }
};
