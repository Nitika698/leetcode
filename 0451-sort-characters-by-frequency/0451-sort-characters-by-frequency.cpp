class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<vector<char>>ds(s.size()+1);
        for(auto it:mp){
            int freq = it.second;char ch = it.first;
            ds[freq].push_back(ch);

        }
        string ans = "";
        for(int i=s.size();i>=0;i--){
            for(auto it:ds[i]){
                ans.append(i,it);
            }
        }

        return ans;
        
    }

};