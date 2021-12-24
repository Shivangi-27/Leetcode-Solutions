class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> temp;
        int n = nums.size();
        int j=0;
        
        while(j!=2)
        {
            for(int i=0 ; i<n ; i++)
            {
                temp.push_back(nums[i]);        
            }
            j++;
        }
        
        return temp;
    }
};