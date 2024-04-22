//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isincrease(vector <int> v)
     {
         for(int i=0;i<v.size()-1;i++)
         {
             if(v[i]>v[i+1] or v[i]==v[i+1])
                return false;
         }
          return true;
     }
     
     bool isdecrease(vector <int> v)
     {
         for(int i=0;i<v.size()-1;i++)
         {
             if(v[i]<v[i+1] or v[i]==v[i+1])
                return false;
         }
          return true;
     }
     
    int sortedCount(int n, int m, vector<vector<int>> Mat) {
        // code here
        int c=0;
       for(int i=0;i<n;i++)
       {     vector <int> v;
           for(int j=0;j<m;j++)
           {
               v.push_back(Mat[i][j]);
           }
           if(isincrease(v) or isdecrease(v))
                   c++;  
       }
       return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends