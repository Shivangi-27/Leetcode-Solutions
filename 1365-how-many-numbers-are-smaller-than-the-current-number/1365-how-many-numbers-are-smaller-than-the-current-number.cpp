class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        //Brute Force
/*        vector<int> res;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            int c=0;
            for(int j=nums.size()-1 ; j>=0 ; j--)
            {
                if(nums[i] > nums[j] && j!=i)
                c++;
            }
            res.push_back(c);
        }
        
        return res; */
       
        //OPTIMISED
        
        unordered_map<int, int> map;
        vector<int> arr = nums;
        
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) 
        {
            if (map.find(arr[i]) == map.end()) 
            {
                map[arr[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) 
        {
            nums[i] = map[nums[i]];
        }
        return nums;
 
    }
};