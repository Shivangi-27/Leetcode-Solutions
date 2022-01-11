class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int ans=0;
        for(int i=0 ; i<sentences.size() ; i++)
        {
            int curr=0;
            
            for(int j=0 ; j<sentences[i].length() ; j++)
            {
                if(sentences[i][j] == ' ')
                curr++;
            }
            ans = max(ans , curr+1);
        }
               
        return ans;
    }
};