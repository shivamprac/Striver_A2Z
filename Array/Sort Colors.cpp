class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1; // 
        int two = nums.size();
        int one  = 0;
        while(one < two) {
            if(nums[one] == 1) one++;
            else if (nums[one] == 2) swap(nums[one], nums[--two]);
            else {
                assert(nums[one] == 0);
                swap(nums[one++], nums[++zero]);
            }
        } 
    }
};
