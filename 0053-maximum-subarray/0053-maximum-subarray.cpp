class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int maxx= INT_MIN;
        
        for(int i=0;i<n;i++){
            ans+= nums[i];
            maxx = max(maxx,ans);
            if(ans<0){
                ans = 0 ;
            }

        }

        return maxx;
    }
};