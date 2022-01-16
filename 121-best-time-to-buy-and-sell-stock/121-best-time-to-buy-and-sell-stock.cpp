class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int greater[n];
        greater[n-1] = prices[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            if(greater[i+1] > prices[i])
                greater[i] = greater[i+1];
            else
                greater[i] = prices[i];
        }
        int ans = INT_MIN;
        
        for(int i = 0 ; i < n ; i++){
            int x = greater[i] - prices[i];
            ans = max(ans, x);
        }
        return ans;
    }
};


