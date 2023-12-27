//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        for(int i=0;i<n;i++)
        {
            bool flag = true;
            for(int j=0;j<n;j++)
            {
                if(arr[j] > arr[i]){
                    flag = false;
                    break;
                }
            }
            
            if(flag == true){
                return arr[i];
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends