class Solution {
private:
    void fun(vector<int>& nums,vector<int>&temp,set<vector<int>> &res,int i){
        if(i==nums.size()){
            res.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        fun(nums,temp,res,i+1);
        temp.pop_back();
        fun(nums,temp,res,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>res;
        fun(nums,temp,res,0);
        vector<vector<int>>t;
        for(auto it:res){
            t.push_back(it);
        }
        return t;
        
        
    }
};
