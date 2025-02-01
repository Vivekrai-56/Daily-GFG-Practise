//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int idx[4]={1,-1,0,0};
    int idy[4]={0,0,1,-1};
    bool helper(vector<vector<char>>& mat, string& word,int r,int c)
    {
         int row=mat.size(),col=mat[0].size();
        
        if(word.size()==0)return true;
        
        if(r<0||r>=row||c<0||c>=col||mat[r][c]!=word[0])return false;
        
        
        string s=word.substr(1);
        for(int i=0;i<4;i++)
        {
            
            int new_row=r+idx[i];
            int new_col=c+idy[i];
            
            char temp=mat[r][c];
            mat[r][c]='.';
            
            if(helper(mat,s,new_row,new_col))return true;
            
            mat[r][c]=temp;
        }
        
    
        
        
        
        return false;
        
        
    }
    
    
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        
        
        int row=mat.size(),col=mat[0].size();
        
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            
            {    if(mat[i][j]!=word[0])continue;
                if(helper(mat,word,i,j))return true;
            }
        }return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends