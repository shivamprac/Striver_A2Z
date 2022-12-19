class Solution {
public:
    int maxNegative(vector<int>& nums) {
        int maxNegative = nums[0];
        for(int e : nums){
            
            if(e >= 0) return 0;
            maxNegative = max(maxNegative, e);
        }
        return maxNegative;
    }
    
    int maxSubArray(vector<int>& nums) {
        int mn = maxNegative(nums);
        if(mn < 0) return mn;
        
        int sum = 0, largest = nums[0];
        for(int e : nums){
            sum += e;
            
            sum = max(sum, 0);
            largest = max(largest, sum);
        }
        
        return largest;
    }
};
