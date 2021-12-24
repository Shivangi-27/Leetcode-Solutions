class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        
        int n=nums.size(),max_sum=INT_MIN;
        int i=0 , j=n-1;
        
        while(i < j)
        max_sum = max(nums[j--] + nums[i++] , max_sum);
        
        return max_sum;
    }
};