class Solution {
public:
    vector<vector<int>> directions = {{0,1},{0,-1}, {1,0},{-1,0}};
    int l,m,n;
    bool find(vector<vector<char>>& board, int i, int j, int idx, string &word){
        if(board[i][j] == l){
            return true;
        }
        if(i<0 || j<0 || i>=m || j>=n || board[i][j] == '$'){
            return false;
        }
        char temp = board[i][j];
        board[i][j] = '$';
        for(auto &dir : directions){
            int _i = i+dir[0];
            int _j = j+dir[1];
            if(find(board,_i,_j,idx+1,word)){
                return true;
            }
        }
        board[i][j] = temp;
        return true;


    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        int l = word.length();
        for(int i=0;i<m;i++){
            for(intj=0;j<n;j++){
                if(board[i][j] == word[0] && find(board,i,j,0,word)){
                    return true;
                }
            }
        }
        return false;
        
    }
};
