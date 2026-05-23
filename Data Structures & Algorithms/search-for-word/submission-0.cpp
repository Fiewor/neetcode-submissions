class Solution {
public:
    int n,m;
    vector<vector<bool>> path;

    bool f(int r, int c, int i, vector<vector<char>>& board, string word){
        if(i==word.size()) return true;
        if(r<0 || c<0 || r>=n || c>=m || path[r][c] || word[i]!= board[r][c])
            return false;

        path[r][c] = true;
        bool res = f(r+1,c,i+1,board,word) ||
            f(r-1,c,i+1,board,word) ||
            f(r,c+1,i+1,board,word) ||
            f(r,c-1,i+1,board,word);
        path[r][c] = false;

        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
        n=board.size(), m=board[0].size();
        path.assign(n,vector<bool>(m,false));
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(f(r,c,0,board,word)) return true;
            }
        }
        return false;
    }
};
