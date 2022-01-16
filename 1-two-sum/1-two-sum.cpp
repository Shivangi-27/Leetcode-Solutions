class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> res;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=nums.size()-1 ; j>=0 ; j--)
            {
                if((nums[i] + nums[j] == target) && i!=j)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
            if(res.size() == 2)
            break;
        }
        
        return res;
    }
};