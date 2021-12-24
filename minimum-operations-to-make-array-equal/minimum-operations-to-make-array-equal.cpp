class Solution {
public:
    int minOperations(int n) {
        
        //return n*n/4;
        
        //or
        
        int i=0 , j=n-1 , res=0;
        
        while(i<j)
        res += j-- - i++;
        
        return res;
    }
};