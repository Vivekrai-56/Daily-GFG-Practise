//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
          int c=0;
        
        for(int i=1;i<=n;i++){
           int num=i;
           while(num>0){
               int digit=num%10;
               if(digit==4){
                   c++;
                   break;
               }
               num/=10;
           }
        }
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends