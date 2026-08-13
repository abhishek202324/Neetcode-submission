class Solution {
private:
    void fun(vector<int> &nums,vector<int> &temp,set<vector<int>>&res,int i){
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>res;
        fun(nums,temp,res,0);
        vector<vector<int>>r;
        for(auto it:res){
            r.push_back(it);
        }
        return r;
        
    }
};
