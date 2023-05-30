//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
         int n = board.size(), m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(solve(board, word, i, j)) return true;
            }
        } 
        return false;
    }
    
     bool solve(vector<vector<char>>& board, string word, int i, int j){ 
        int n = board.size(), m = board[0].size();
        if(!word.size()) return true;
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]!=word[0]) return false;
        char ch = board[i][j]; //storing the char because we will need it after backbracking
        board[i][j] = '#';   
        string s = word.substr(1);
        bool ret = solve(board, s, i-1,j) || solve(board, s, i+1,j) || solve(board, s, i,j-1) || solve(board, s, i ,j+1);  //checking all four directions
        board[i][j] = ch;  //backtrack, make everything same as before
        return ret;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends