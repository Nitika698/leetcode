class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        auto it = max_element(arr.begin(), arr.end());
        int index = it - arr.begin();

        return index;
    }
};