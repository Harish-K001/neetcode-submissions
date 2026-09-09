class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high = *max_element(piles.begin(),piles.end());
    int answer = high;
    while(low<=high){
        int calculate_hours = 0;    
        int k = low + (high-low)/2;
        for(int i = 0; i< piles.size();i++){
            calculate_hours += (piles[i] + k -1)/k;
        }
        if(calculate_hours >h){
            low = k+1;
        }
        else{
            answer =k;
            high = k-1;
        }
    }
    return answer;
    }
};
