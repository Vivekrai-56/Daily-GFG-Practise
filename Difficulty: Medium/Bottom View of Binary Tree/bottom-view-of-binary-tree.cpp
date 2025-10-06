/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        queue<pair<Node*, int>> q;
        map<int,int> m;
        
        q.push({root,0});
        
        while(!q.empty()){
            Node* temp = q.front().first;
            int pos = q.front().second;
            q.pop();
            
            // If element do not exist insert it, if exist then update it the the latest value
            if(m.find(pos) == m.end()){
                m[pos] = temp->data;
            }
            else{
                m[pos] = temp->data;
            }
            
            if(temp->left){
                q.push({temp->left,pos-1});
            }
            
             if(temp->right){
                q.push({temp->right,pos+1});
            }
        }
        
        for(auto i : m){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};