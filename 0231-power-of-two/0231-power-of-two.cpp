class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int x;
        
        for(int i=0 ; i<=30 ; i++)
        {
            x = pow(2,i);
            
            if(x == n)
            return true;
        }
        
        return false;
    }
};