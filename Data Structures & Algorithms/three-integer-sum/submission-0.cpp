class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int size = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i = 0;i<size-2;i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int end = size-1;
            int target = nums[i];
            int start = i+1;
            while(start < end){
                int sum = nums[start] + nums[end];
                if(sum < -(target)){
                    start++;
                }
                else if (sum > -(target)){
                    end--;
                }
                else{
                    vector<int> temp = {nums[i],nums[start],nums[end]};
                    result.push_back(temp);
                    while(start < end && nums[start] == nums[start+1]){
                         start++;
                    }
                    while(start < end && nums[end] == nums[end-1]){
                        end--;
                    }
            start++;
            end--;
         }
      }
      
   }
   return result; 
    }
};
