class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        string result ="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
           result+=ans[i];

        }

        return ans==result;


    }
};