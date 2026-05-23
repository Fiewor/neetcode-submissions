class Solution {
public:
    vector<vector<int>> res;
    vector<int> curr;
    int n;
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        dfs(0,nums);
        return res;
    }
    void dfs(int k, vector<int>& nums){
        if(k==n){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[k]);
        dfs(k+1,nums);
        curr.pop_back();
        dfs(k+1,nums);
    }
};
