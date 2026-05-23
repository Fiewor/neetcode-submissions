class Solution {
public:
    int sz;
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        sz=n; string s;
        f(0,0,s);
        return res;
    }

    void f(int o, int c, string& s){
        if(o==c && o==sz){
            res.push_back(s);
            return;
        }

        if(o<sz){
            s += '(';
            f(o+1,c,s);
            s.pop_back();
        }

        if(c<o){
            s += ')';
            f(o,c+1,s);
            s.pop_back();
        }
    }
};
