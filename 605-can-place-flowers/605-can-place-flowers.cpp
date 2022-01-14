class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            
        int s = flowerbed.size(), count=0;
        
        for(int i=0 ; i<s ; i++)
        {
            if(flowerbed[i] == 0) //only check when flowerbed[i] ==0
            {
                int prev=((i==0 || flowerbed[i-1]==0) ? 0 : 1); 
//since for i = 0 there is no prev therefore automatically prev=0(only when i = 0) 
                int next=((i==s-1 || flowerbed[i+1]==0) ? 0 : 1);
//since for i = s-1 there is no next therefore automatically prev=0(only when i = s-1) 
            
                if(prev==0 && next==0)
                {
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        
        return count >= n;
    }
};