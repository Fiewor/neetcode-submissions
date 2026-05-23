#define all(a) begin(a),end(a)

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        sort(all(nums));
        do{
            res.push_back(nums);
        }while(next_permutation(all(nums)));
        return res;
    }
};
