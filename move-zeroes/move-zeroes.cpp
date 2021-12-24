class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int c=0;
        int n=nums.size();
        vector<int> temp;
        
        if(n == 1)
        return ;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                temp.push_back(nums[i]);
            }
            
            else if(nums[i] == 0)
            {
                c++;
            }
        }
        
        for(int i=0 ; i<c ; i++)
        {
            temp.push_back(0);
           
        }
        
        nums=temp;
    }
};