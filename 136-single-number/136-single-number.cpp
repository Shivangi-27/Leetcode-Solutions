class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int> map;
        int ans;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            int key = nums[i];
            map[key]++;
        }
        
        for(auto it=map.begin() ; it!=map.end() ; it++)
        {
            if(it->second == 1)
            ans = it->first;                
        }
        
        return ans;
    }
};