class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        for(char c:s){
            if(c == '(' || c == '[' || c =='{'){
                stac.push(c);
            }
            else{
                if(stac.empty()) return false;
                char top = stac.top();
                stac.pop();
                if((c == ')' && top != '(')||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')
                ){
                    return false;
                }
            }
        } 
        return stac.empty();
    }
};
