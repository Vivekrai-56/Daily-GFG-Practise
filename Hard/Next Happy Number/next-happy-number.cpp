//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int fun(int f)
    {
        if(f==1) return 1;
        if(f==7) return 1;
        if(f>=2 && f<=9) return 0;
        int cnt=0;
        while(f>0)
        {
            int x = f%10;
            x=x*x ;
            cnt = cnt + x ;
            f=f/10;
        }
        return fun(cnt) ;
    }
    int nextHappy(int N)
    {
        for(int i=(N+1) ; i<=(N+1000000) ; i++)
        {
            if(fun(i)==1) return i;
        }
        return (-1) ;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends