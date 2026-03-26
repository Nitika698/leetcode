class Solution {
public:
    void helper(string digits,vector <string>&ans,string output,int ind,string combo[]){
        if(ind==digits.length()){
            ans.push_back(output);
            return;
        }
        
        int num = digits[ind]-'0';
        string val=combo[num];
        for(int i=0;i<val.length();i++){
            output.push_back(val[i]);
            helper(digits,ans,output,ind+1,combo);
            output.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        vector<string>ans;string output;int ind=0;
        string combo[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        helper(digits,ans,output,ind,combo);
        return ans;
    }
};