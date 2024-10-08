//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        for(char c: s){
             if( c=='(' || c== '[' || c=='{' ){
                 st.push(c);
             }
             else{
                 if(st.empty()){
                     return false;
                 }
                 else if( c==')' && st.top() !=  '('){
                     return false;
                 }
                else if(c==']' && st.top() != '['){
                    return false;
                }
                else if( c== '}' && st.top() != '{'){
                    return false;
                }
                else {
                    st.pop();
                }


             }
        }

       return st.empty();
    }

};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends