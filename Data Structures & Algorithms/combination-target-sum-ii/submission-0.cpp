class Solution {
private:
    void fun(vector<int> &nums,vector<int> &temp,vector<vector<int>> &res,int i,int target){
        if(target==0){
            res.push_back(temp);
            return;
        }
        if(i==nums.size() || target<0)return;

        temp.push_back(nums[i]);
        fun(nums,temp,res,i+1,target-nums[i]);
        temp.pop_back();
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
        fun(nums,temp,res,j,target);
        break;
            }
        }

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>res;
        fun(nums,temp,res,0,target);
        return res;
        
    }
};
