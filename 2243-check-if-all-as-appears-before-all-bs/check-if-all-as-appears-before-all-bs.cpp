class Solution {
public:
    bool checkString(string s) {
        for(int i =0;i<s.size();i++){
            if(s[i]!='b'){
                continue;
            }
            for(int j= i+1;j<s.size();j++){
                if(s[j]=='a'){
                    return false;
                }
            }
        }
        return true;
    }
};