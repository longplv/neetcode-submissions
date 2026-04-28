class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int MaxArea = 0;
        int lenght = 0;
        while(left < right){
            lenght = right - left;
            MaxArea = max(MaxArea, min(heights[left], heights[right])*lenght);
            if(heights[left] < heights[right]) {
                left ++;
            }
            else{
                right--;
            }
        }
        return MaxArea;
    }
};
