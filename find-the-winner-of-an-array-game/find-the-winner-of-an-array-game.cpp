class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int max = arr[0], res=0;
        for(int i=1 ; i<arr.size() ; i++)
        {
            if(max > arr[i])
            res++;
            
            else
            {
                max = arr[i];
                res = 1;
            }
            
            if(res == k)
            return max;
        }
        return max;
    }
};