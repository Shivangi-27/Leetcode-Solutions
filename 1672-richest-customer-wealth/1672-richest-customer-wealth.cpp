class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int ans=0;
        
        for(int i=0 ; i<accounts.size() ; i++)
        {
            int curr=0;
            for(int j=0; j<accounts[i].size() ; j++)
            {
                curr+=accounts[i][j];
            }
            
            ans = max(ans , curr);
        }
        
        return ans;
    }
};