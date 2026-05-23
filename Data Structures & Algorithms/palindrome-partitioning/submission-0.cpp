class Solution {
public:
    int n;
    vector<vector<string>> res;
    bool isPalindrome(int i, int j, string& s){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }
        return true;
    }

    void f(int i, vector<string>& sub, string& s){
        if(i>=n){
            res.push_back(sub);
            return;
        }
        for(int j=i;j<n;j++){
            if(!isPalindrome(i,j,s)) continue;
            sub.push_back(s.substr(i,j-i+1));
            f(j+1,sub,s);
            sub.pop_back();
        }
    }

    vector<vector<string>> partition(string s) {
        n=s.size();
        vector<string> sub;
        f(0,sub,s);
        return res;
    }
};