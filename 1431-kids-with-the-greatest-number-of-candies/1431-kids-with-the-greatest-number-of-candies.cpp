class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> res;
        int max_c = *max_element(candies.begin() , candies.end());
        
        for(int i=0 ; i<candies.size() ; i++)
        {
            if(candies[i] + extraCandies >= max_c)
            res.push_back(true);
            
            else
            res.push_back(false);
        }
        return res;        
    }
};