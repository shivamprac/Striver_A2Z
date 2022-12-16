class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x = 0, y = 0;
        for(; x < nums.size(); x++){
            if(nums[x]){
                nums[y++] = nums[x];
            }
        }
        
        for(; y < nums.size(); y++){
            nums[y] = 0;
        }
    }
};
