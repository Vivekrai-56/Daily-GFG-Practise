//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int maxProfit(vector<int>& prices, int k) {
        int n = prices.size();
        
        if (n == 0 || k == 0) return 0; // No prices or no transactions
        
        // If k is greater than or equal to n/2, we can make as many transactions as we want
        if (k >= n / 2) {
            int profit = 0;
            for (int i = 1; i < n; i++) {
                if (prices[i] > prices[i - 1]) {
                    profit += prices[i] - prices[i - 1]; // Buy at prices[i-1] and sell at prices[i]
                }
            }
            return profit;
        }
        
        // DP table initialization
        vector<vector<int>> dp(n, vector<int>(k + 1, 0));
        
        // DP transition
        for (int j = 1; j <= k; j++) {
            int max_diff = -prices[0]; // Maximum difference of dp[m][j-1] - prices[m]
            
            for (int i = 1; i < n; i++) {
                dp[i][j] = max(dp[i-1][j], prices[i] + max_diff); // Sell today, calculate profit
                max_diff = max(max_diff, dp[i][j-1] - prices[i]); // Update max_diff for future sales
            }
        }
        
        return dp[n-1][k];
    }
};


//{ Driver Code Starts.

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        istringstream iss(input);
        vector<int> arr;
        int num;

        // Read integers from the input string
        while (iss >> num) {
            arr.push_back(num);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << ob.maxProfit(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends