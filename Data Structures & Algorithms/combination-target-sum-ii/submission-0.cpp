class Solution {
public:
    int n;
    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        n=candidates.size();
        sort(candidates.begin(),candidates.end());
        f(0,0,{},candidates,target);
        return res;
    }

    void f(int i, int sm, vector<int> sub, vector<int>& candidates, int target){
        if(sm==target){
            res.push_back(sub);
            return;
        }

        for(int j=i;j<n;j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(sm+candidates[j]>target) break;
            sub.push_back(candidates[j]);
            f(j+1,sm+candidates[j],sub,candidates,target);
            sub.pop_back();
        }
    }
};
