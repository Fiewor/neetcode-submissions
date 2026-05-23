class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        f(0,{},nums);
        return res;
    }

    void f(int i,vector<int>sub,vector<int>&nums){
        if(i==nums.size()){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        f(i+1,sub,nums);
        sub.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]) i++;
        f(i+1,sub,nums);
    }
};
