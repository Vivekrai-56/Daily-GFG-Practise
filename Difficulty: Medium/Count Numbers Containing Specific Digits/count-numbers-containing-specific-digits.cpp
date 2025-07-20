class Solution {
    vector<vector<int>>dp;
    
    int dpSolve(int idx,int n,bool include,unordered_set<int>st){
        if(idx==n)return include;
        if(dp[idx][include]!=-1)return dp[idx][include];
        int ans=0;
        for(int i=(idx==0)?1:0;i<=9;i++){
            if(include)ans+=dpSolve(idx+1,n,include,st);
            else{
                if(st.find(i)==st.end())ans+=dpSolve(idx+1,n,include,st);
                else ans+=dpSolve(idx+1,n,1-include,st);
            }
        }
        return dp[idx][include]=ans;
    }
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
        unordered_set<int>st(arr.begin(),arr.end());
        dp.resize(n+1,vector<int>(2,-1));
        return dpSolve(0,n,0,st);
    }
};
