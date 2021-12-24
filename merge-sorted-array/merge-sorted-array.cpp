class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0;
        nums1.resize(m);
        
        while(i!=n)
        nums1.push_back(nums2[i++]);
        
        sort(nums1.begin() , nums1.end());
        
    }
};