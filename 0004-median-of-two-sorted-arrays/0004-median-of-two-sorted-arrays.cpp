class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float median;
        
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n= nums1.size();

        if(n%2 != 0){
            median = nums1[n/2];
        
        }
        else{
            int x =n/2;
            median =( nums1[x]+nums1[x-1])/2.0;
        }

        return median;
    }
};