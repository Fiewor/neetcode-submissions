class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        f(0,0,{},nums,target);
        return res;
    }

    void f(int i, int sm, vector<int> sub, vector<int>& nums, int target){
        if(sm==target){
            res.push_back(sub);
            return;
        }
        for(int j=i;j<nums.size();j++){
            if(sm+nums[j]>target) return;
            sub.push_back(nums[j]);
            f(j,sm+nums[j],sub,nums,target);
            sub.pop_back();
        }
    }
};
