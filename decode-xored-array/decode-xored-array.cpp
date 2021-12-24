class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> nums;
        
        nums.push_back(first);
        
        for(int i=0 ; i<encoded.size() ; i++)
        {
            nums.push_back(nums[i] ^ encoded[i]);           
        }
        
        return nums;
    }
};