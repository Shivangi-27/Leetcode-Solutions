class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int> temp;
        int i=num.size()-1;
        while(i>=0 || k>0)
        {
            if(i>=0)
            {
                temp.push_back((num[i] + k) % 10);
                k= (num[i]+k)/10;
                i--;
            }
            
            else
            {
                temp.push_back(k % 10);
                k/=10;
            }
        }
        reverse(temp.begin() , temp.end());
                
        return temp;
    }
};