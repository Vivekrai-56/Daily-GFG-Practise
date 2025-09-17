class Solution {
  public:
    string decodedString(string &s) {
        // code here
         stack<int> numStack;
    stack<string> strStack;
    string currStr = "";
    int currNum = 0;

    for (char c : s) {
        if (isdigit(c)) {
            currNum = currNum * 10 + (c - '0'); 
        } else if (c == '[') {
            numStack.push(currNum);
            strStack.push(currStr);
            currNum = 0;
            currStr = "";
        } else if (c == ']') {
            int times = numStack.top(); 
            numStack.pop();
            string prevStr = strStack.top(); 
            strStack.pop();
            string expanded = "";
            for (int i = 0; i < times; i++) 
            expanded += currStr;
            currStr = prevStr + expanded;
        } else {
            currStr += c;
        }
    }

    return currStr;
    }
};