//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	void findFactors(int num, int& total){
        
        vector<int> factors; // store the factors of a given number
        
        for(unsigned int i = 2; i*i <= num; ++i){
            
            if(num%i == 0){
                while(num%i == 0){
                    factors.push_back(i);
                    
                    num = num/i;
                }
            }
        }
        
        if(num > 1) // means, the number was a prime number
                factors.push_back(num);
            
            // doing step 2 task
            
            int size = factors.size();
            
            total += size; 
    }
public:
	int sumOfPowers(int a, int b){
	    // Code here
	    
	    // step 1:
	    // find the factors of all the numbers, from a to b -> run a for loop
	    
	    // step 2:
	    // In factor function -> store the factors of a given number, and once calculated
	    // find the size of the factors array and add that to ans.
	    
	    // step 3:
	    // return the answer
	    
	    int total = 0; // store the answer
	    
	    for(int i=a; i<=b; i++){
	        findFactors(i, total);
	    }
	    
	    return total;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends