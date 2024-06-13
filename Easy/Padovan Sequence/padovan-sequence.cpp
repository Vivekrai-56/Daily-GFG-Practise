//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       const int MOD = 1000000007;
        
        // Base cases
        if (n == 0 || n == 1 || n == 2) return 1;
        
        // Create a vector to store the sequence values
        vector<long long> padovan(n + 1);
        
        // Initialize the base cases
        padovan[0] = 1;
        padovan[1] = 1;
        padovan[2] = 1;
        
        // Fill the array using the recurrence relation
        for (int i = 3; i <= n; ++i) {
            padovan[i] = (padovan[i-2] + padovan[i-3]) % MOD;
        }
        
        // Return the nth Padovan number
        return padovan[n];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends