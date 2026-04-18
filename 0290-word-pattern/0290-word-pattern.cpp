class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string>words;
        string temp = "";

        for(char c:s){
            if(c == ' '){
                words.push_back(temp);
                temp ="";
            }
            else{
                temp+=c;
            }
        }

        words.push_back(temp);

        if(pattern.size() != words.size()) return false;

        unordered_map<char,string> m1;
        unordered_map<string , char>m2;
        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string word = words[i];

            
            if (m1.count(ch) && m1[ch] != word) return false;
            if (m2.count(word) && m2[word] != ch) return false;

            
            m1[ch] = word;
            m2[word] = ch;
        }

        return true;




    }
};