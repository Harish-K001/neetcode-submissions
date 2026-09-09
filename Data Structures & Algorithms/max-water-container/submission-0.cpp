class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int end = heights.size()-1;
        int maxArea = 0;
        while(start<end){
            int index = end-start;
            int minimum = min(heights[start], heights[end]);
            int vol = index * minimum;
            if(maxArea < vol){
                maxArea = vol;
            }
            if(heights[start] == minimum){
                start++;
            }
            else {
                end--;
            }   
        }
        return maxArea;
    }
};
