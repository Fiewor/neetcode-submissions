class Solution {
public:
    int n;
    vector<string> res;
    unordered_map<int,vector<char>> mp = {
        {'2', {'a','b','c'}},
        {'3', {'d','e','f'}},
        {'4', {'g','h','i'}},
        {'5', {'j','k','l'}},
        {'6', {'m','n','o'}},
        {'7', {'p','q','r','s'}},
        {'8', {'t','u','v'}},
        {'9', {'w','x','y','z'}},
    };

    void f(int i, string& s, string& digits){
        if(i==n){
            res.push_back(s);
            return;
        }
        for(auto el: mp[digits[i]]){
            s.push_back(el);
            f(i+1,s,digits);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        n=digits.size();
        if(n==0) return {};
        string s;
        f(0,s,digits);
        return res;
    }
};
