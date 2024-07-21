class Solution {
public:
    bool searchnext(vector<vector<char>>& board, string word,int row,int column,int index,int m,int n){
        if(index==word.length())return true;
        if(row<0||column<0||row==n||column==m||board[row][column]!=word[index]||board[row][column]=='!')
        return false;
        char c=board[row][column];
        board[row][column]='!';
        bool top=searchnext(board,word,row-1,column,index+1,m,n);
        bool bottom=searchnext(board,word,row+1,column,index+1,m,n);
        bool left=searchnext(board,word,row,column-1,index+1,m,n);
        bool right=searchnext(board,word,row,column+1,index+1,m,n);
        board[row][column]=c;
        return  (top||bottom||right||left);
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();//no. of rows
        int m=board[0].size();//no. of columns
      int  index=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[index])
                if(searchnext(board,word,i,j,index,m,n))
                return true;
            }
        }
        return false;
    }
};