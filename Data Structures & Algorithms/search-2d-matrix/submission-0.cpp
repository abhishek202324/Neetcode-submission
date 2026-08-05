class Solution {
bool func(vector<int>num,int col,int target){
        int low=0,high=col-1;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(num[mid]==target)return true;
            else if(num[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size(),col=mat[0].size();
        for(int i=0;i<row;i++){
            if(func(mat[i],col,target))return true;
        }
        return false;

        
    }
};
