class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int> res;
        
//         for(int i=0 ; i<nums.size() ; i++)
//         {
//             for(int j=nums.size()-1 ; j>=0 ; j--)
//             {
//                 if((nums[i] + nums[j] == target) && i!=j)
//                 {
//                     res.push_back(i);
//                     res.push_back(j);
//                 }
//             }
//             if(res.size() == 2)
//             break;
//         }
        
//         return res;
        
        unordered_map<int,int> map;
        vector<int> res;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(map.find(target-nums[i]) != map.end() && i != map[target - nums[i]])
            {
                res.push_back(map[target-nums[i]]);
                res.push_back(i);
            }
            
            else
            map[nums[i]] = i;
        }
        return res;
    }
};