class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                x+=tolower(s[i]);
            }
        }
        string z=x;
        reverse(z.begin(),z.end());

        if(x==z)
         return true;
        else 
         return false;
    }
};
