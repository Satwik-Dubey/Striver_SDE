class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>Input;
        Input['I']=1;
        Input['V']=5;
        Input['X']=10;
        Input['L']=50;
        Input['C']=100;
        Input['D']=500;
        Input['M']=1000;
        int total=0;

        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && Input[s[i]]<Input[s[i+1]]){
                total-=Input[s[i]];
            }else{
                total+=Input[s[i]];
            }
        }
        return total;
    }
};
