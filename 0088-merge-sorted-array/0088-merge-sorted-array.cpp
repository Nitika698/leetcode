class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sum = n+m;
        
        vector<int> first(nums1.begin(), nums1.begin() + m);
        vector<int> second(nums2.begin(), nums2.begin() + n);

        first.insert(first.end(),second.begin(),second.end());

        int sz = first.size();

        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if (first[i] > first[j]) {
                    swap(first[i], first[j]);
                }
            }
        }
        
        for(int i = 0; i < sz; i++){
            nums1[i] = first[i];
        }



        }
        
    
};