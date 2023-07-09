//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int maxNo = INT_MIN;
        unordered_map<int, int> umap;
        for(int i=0;i<n;i++)
        {
            maxNo = max(maxNo, arr[i]);
            umap[arr[i]]++;
        }
        if(maxNo < 1)return 1;
        
        for(int i=1;i<=maxNo;i++)
        {
            if(umap.find(i)==umap.end())return i;
        }
        return maxNo+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends