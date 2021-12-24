class Solution {
public:
    bool isPalindrome(int x) {
        
                
        long long int rev=0,rem;
        long long int temp=x;
        
        if(x<0)
            return false;
        
        while(x!=0)
        {
            rem=x%10;
            rev=rem+rev*10;
            x=x/10;
        }
        
        if(rev==temp)
            return true;
        
        else
            return false;
        
    }
};