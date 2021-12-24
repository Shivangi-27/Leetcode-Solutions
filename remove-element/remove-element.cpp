class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i,c=0;
        int n=nums.size();
        for(i=0 ; i<n ; i++)
        {
            if(nums[i]==val)
            {
                nums[i]=-1;
                c++;
            }
        }
        
        sort(nums.begin() , nums.end());
        reverse(nums.begin() , nums.end());
        return n-c;
    }
};