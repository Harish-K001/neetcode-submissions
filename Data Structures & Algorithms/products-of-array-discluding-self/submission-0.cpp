class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        int n = nums.size();
        vector<int> result(n);
        for(int i = 0;i<n;i++){
            result[i] = prefix;
            prefix*= nums[i];

        }
        for(int i = n-1;i>=0;i--){
            result[i]*=suffix;
            suffix*= nums[i];
      
        }
        return result;
    }
};
