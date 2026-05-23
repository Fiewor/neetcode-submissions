class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> pick(nums.size(),false);
        vector<int> perm;
        f(pick,perm,nums);
        return res;
    }

    void f(vector<bool>& pick, vector<int>& perm, vector<int>& nums){
        if(perm.size()==nums.size()){
            res.push_back(perm);
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(pick[i]) continue;

            pick[i]=true;
            perm.push_back(nums[i]);
            f(pick,perm,nums);
            perm.pop_back();
            pick[i]=false;
        }
    }
};
