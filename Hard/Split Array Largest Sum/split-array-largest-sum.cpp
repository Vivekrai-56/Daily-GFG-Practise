//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(long long int sum , int arr[] ,int n, int k)
    {
        long long int temp=0;
        
        int i=0;
        int tempk=0;
        while(i<n && temp<=sum)
        {
            if(arr[i]>sum)
            {
                return false;
            }
            temp+=arr[i];
            if(temp>sum)
            {
                tempk++;
                temp=arr[i];
            }
            i++;
        }
        tempk++;
        
        if (tempk<=k)
        {
            return true;
        }
        return false;
    }
    int splitArray(int arr[] ,int n, int k) {
        // code here
        
        long long int sum=0;
        
        for(int i=0 ; i<n ; i++)
        {
            sum+=arr[i];
        }
        
        long long int low=0;
        long long int high=sum;
        long long int ans=INT_MAX;
        
        while(low <= high)
        {
            long long int maxSum= low+(high-low)/2;
            if(isPossible(maxSum , arr, n, k))
            {
                ans=maxSum;
                high=maxSum-1;
            }
            else{
                low=maxSum+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends