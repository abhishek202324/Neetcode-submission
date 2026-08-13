class Solution {
private:
    void fun(vector<int> &nums,vector<int> &temp,vector<vector<int>> & res,int target,int i){
        if(target==0){
            res.push_back(temp);
            return;
        }
        if(i==nums.size()||target<0){
            return;
        }
        temp.push_back(nums[i]);
        fun(nums,temp,res,target-nums[i],i);
        temp.pop_back();
        fun(nums,temp,res,target,i+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        fun(nums,temp,res,target,0);
        return res;
        
    }
};
