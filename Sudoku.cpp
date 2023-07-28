class Solution {
private:
    bool f(vector<vector<char>>& board,vector<vector<bool>>& row,vector<vector<bool>>& col,vector<vector<bool>>& box,vector<pair<int,int>>& store,int index){

        if(index == store.size()) return true;

        int i = store[index].first;
        int j = store[index].second;

        for(int k=1;k<10;k++){
            if(!(row[i][k-1] || col[j][k-1] || box[(i/3)*3 + j/3][k-1])){
                board[i][j]= k + '0';
                row[i][k-1] = col[j][k-1] = box[(i/3)*3 + j/3][k-1] =1;

                if(f(board,row,col,box,store,index+1)) return true;

                board[i][j]='.';
                row[i][k-1] = col[j][k-1] = box[(i/3)*3 + j/3][k-1] =0;
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        int r = board.size();
        int c= board[0].size();
        vector<vector<bool>> row(r,vector<bool> (c,false));
        vector<vector<bool>> col(r,vector<bool> (c,false));
        vector<vector<bool>> box(r,vector<bool> (c,false));
        vector<pair<int,int>> store;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]!='.') 
                {
                    row[i][board[i][j] - '0' -1]=1;
                    col[j][board[i][j] - '0' -1]=1;
                    box[(i/3)*3 + j/3][board[i][j] - '0' -1]=1;
                }
                else{
                    store.push_back({i,j});
                }
            }
        }
        f(board,row,col,box,store,0);
    }
};