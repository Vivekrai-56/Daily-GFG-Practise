//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        //upper part
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n-i-1;j++)
          {
              cout<<" ";
          }
          int j=n-i-1;
          for(int l=j+1;l<=n;l++)
          {
              cout<<"* ";
          }
          cout<<endl;
      }
      //lower part
    for (int i=0;i<n;i++)
    {
        for ( int j=0;j<n;j++)
        {
           if(j<i) cout<<" ";
           else cout<<"* ";
       }
        cout<<endl;
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends