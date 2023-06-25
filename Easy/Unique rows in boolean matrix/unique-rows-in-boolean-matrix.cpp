//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);


// } Driver Code Ends
class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        //Your code here
        unordered_map<long long , bool > mp;
         vector<vector<int> > ans;
        for(int i = 0; i<row; i++)
        {
            vector<int> row;
            long long key = 0;
            for(int j = 0; j<col; j++)
            {
                key += M[i][j]*pow(2 , j);
            }
            if(!mp.count(key))
            {
                for(int j = 0; j<col; j++)
                {
                    mp[key] = true; //Not needed Just for creating a new entry
                    row.push_back(M[i][j]);
                }
                ans.push_back(row);
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	Solution ob;
    	vector<vector<int>> vec = ob.uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends