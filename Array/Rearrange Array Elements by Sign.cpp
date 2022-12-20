class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);
        int half=n/2;
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                pos.push_back(nums[i]);
            
            else if(nums[i]<0)
                neg.push_back(nums[i]);
        }
        
        for(int i=0;i<pos.size();i++)
        {
            ans[i*2]=pos[i];
        }
        int n1=0;
        for(int i=0;i<neg.size();i++)
        {
            n1=i+1;
            
            ans[i+n1]=neg[i];
        }
        
        return ans;
        
    }
};
