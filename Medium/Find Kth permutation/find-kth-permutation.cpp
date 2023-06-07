//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int factorial( long long int n ){

        long long int ans = 1;

        for (int i =0 ; i<n ; i++){

            ans *= i+1;

        }

        return ans;

    }

    string solve(set<int> s, int n, long long int k){

        if ( k==1 ){

            string ans = "";

            for (auto c:s){

                ans+=to_string(c);

            }

            return ans;

        }

        long long int i = (k + factorial(n-1) - 1)/factorial(n-1);

        string ans = "";

        long long int j = 0;

        long long int temp2 = 0;

        for (auto k:s){

            if ( j == i-1 ){

                ans+=to_string(k);

                temp2 = k;

                break;

            }

            j++;

        }

        set<int> temp = s;

        temp.erase(temp2);

        k-= factorial(n-1) * (i-1);

        ans += solve(temp, n-1, k);

        return ans;

    }

 

    string kthPermutation(int n, int k)

    {

        set<int> s;

        for (int i =0 ; i<n ; i++){

            s.insert(i+1);

        }

        return solve(s,n,k);

    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends