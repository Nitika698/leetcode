class Solution {
public:
    string removeKdigits(string num, int k) {
       stack<char>st;
       string ans = "";
       int i = 0;

       for(char digits:num){
        while(!st.empty()&&k>0&&st.top()>digits){
            st.pop();
            k--;
        }
        st.push(digits);
       }

        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

         
        while(i < ans.size() && ans[i] == '0') i++;

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;


        
    }
};