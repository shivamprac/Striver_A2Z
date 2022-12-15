class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int x = 0;
        for(int y = 1; y < nums.size(); y++){
            if(nums[y] != nums[x]){
                x++;
                nums[x] = nums[y];
            }
         
        }
        return x+1;
    }
};
