class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++){
            int c=0;
            for(int j=0;j<32;j++){
                if(i&(1<<j)) c++;
            }
            res.push_back(c);
        }
        return res;
    }
};
