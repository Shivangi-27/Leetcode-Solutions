class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> temp;
        
        sort(arr.begin() , arr.end());
        int i;
        int diff=arr[1]-arr[0];
        
        for(i=1 ; i<arr.size() ; i++)
        {
            int res = arr[i]-arr[i-1];
            if(res < diff)
            {
                temp.clear();
                diff = res;
                temp.push_back({arr[i-1], arr[i]});
            }
            
            else if(res == diff)
            temp.push_back({arr[i-1], arr[i]});
        }
        return temp;
    }
};