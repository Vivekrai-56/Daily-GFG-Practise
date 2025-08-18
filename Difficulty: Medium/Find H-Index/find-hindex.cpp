class Solution {
  public:
    int hIndex(vector<int>& arr) {
        int n = arr.size() ;
        sort(arr.begin() , arr.end()) ;
       
        int ans = 0 ;
        
        for(int i=0 ; i<=n ; i++){
            int ini = i + 1 ; 
            int num = i ;
             
            int index = lower_bound(arr.begin() , arr.end(),num) - arr.begin();
            int len = n - index  ;
        
            if(i <= len){
                ans = i ;
            }
        }
        
        return ans ;
    }


};