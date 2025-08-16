class Solution {
public:
    bool isValid(string s) {
        stack<char>result;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i]== '['){
                result.push(s[i]);
            }else if (result.empty()){
                return false;
            }else{
                char ch= result.top();
                result.pop();
                if(s[i]==')' && ch=='(' || s[i]=='}' && ch=='{' || s[i]==']' && ch=='['){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return result.empty();
    }
};
