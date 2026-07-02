class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        // i=2 j=2;
        // mopnm // 5
        while(i<=j){ 
            if(!isalnum(s[i])) {
                i++;
                continue;
            }
            if(!isalnum(s[j])) {
                j--;
                continue;
            }
            char a = tolower(s[i]), b = tolower(s[j]);
            if(a != b) return false; // break early, defensive
            i++; j--;
        }
        return true;
    }
};
