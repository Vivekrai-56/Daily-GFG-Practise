//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
         //Your code here
        int first = arr[0],secondl = INT_MIN,thirdl = INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(arr[i] > first ){
                thirdl  = secondl;
                secondl = first;
                first   = arr[i]; 
            }
            else if(arr[i] > secondl ){
                thirdl  = secondl;
                secondl = arr[i];
            }
            else if(arr[i] > thirdl){
                thirdl = arr[i];
            }
        }
        
        return thirdl;
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends