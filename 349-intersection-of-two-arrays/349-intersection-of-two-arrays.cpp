class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
//         sort(nums1.begin() , nums1.end());
//         sort(nums2.begin() , nums2.end());
//         vector<int> res;
        
//         for(int i=0 ; i<nums1.size() ; i++)
//         {
//             for(int j=0 ; j<nums2.size() ; j++)
//             {
//                 if(nums1[i]==nums2[j])
//                 res.push_back(nums1[i]);
                
//             }
//         }
        
//         res.erase(unique(res.begin() , res.end()) , res.end());
        
//         return res;
        
        unordered_set<int> set;
        vector<int> res;
        
        for(int i=0 ; i<nums1.size() ; i++)
        set.insert(nums1[i]);
        
        for(int i=0 ; i<nums2.size() ; i++)
        {
            if(set.find(nums2[i]) != set.end())
            {
                res.push_back(nums2[i]);
                set.erase(nums2[i]);
            }
        }
        
        
        
        return res;
    }
};