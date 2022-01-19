class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
                //apply Binary Search as when visulaised in 1D array form its sorted so apply BS
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end = row*col - 1;
        
        int mid = start + (end-start)/2;
        
        while(start<=end){
            //find target element in 2D array
            //mid/col gives the row no. of the target element
            //mid%col gives col no. from 0 to n-1 so these two gives exact location so apply BS
            
            int element = matrix[mid/col][mid%col];
            
            if(element == target){
                return true;
            }
            else if (element > target){
                //come left
                end = mid-1;
            }
            else{
                //element<target
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return false;   //if not able to find 
    }
};