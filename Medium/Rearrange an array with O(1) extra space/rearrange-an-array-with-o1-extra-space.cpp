//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        // Modify the array elements to encode both the old and new values
        for (int i = 0; i < n; i++) {
            // Adding n*(new value) to the current element
            // new value is stored at arr[arr[i]] % n
            arr[i] += (arr[arr[i]] % n) * n;
        }

        // Retrieve the new values from the modified array
        for (int i = 0; i < n; i++) {
            // Dividing by n gives the new value
            arr[i] /= n;
        }
        
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends