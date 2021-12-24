class Solution {
public:
    int arrangeCoins(int n) {
        
        long long i=0, c=0;
      
        for(i=0 ; i<=n ; ++i)
        {
            c=c+i;
            
            if(c > n)
            {
                i = i-1;
                break;
            }
            
            if(c == n)
            break;            
        }
        
        return i;
    }
};