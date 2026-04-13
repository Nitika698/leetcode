class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);   
        stack<int> st;

        for(int i = 2*n - 1; i >= 0; i--) {
            int idx = i % n;
            int ele = nums[idx];

            
            while(!st.empty() && st.top() <= ele) {
                st.pop();
            }

            
            if(i < n) {
                if(!st.empty()) {
                    ans[idx] = st.top();
                }
            }

            
            st.push(ele);
        }

        return ans;
    }
};