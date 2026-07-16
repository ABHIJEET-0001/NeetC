class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for (int x : nums1) {

            int index = -1;

            // Find x in nums2
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == x) {
                    index = i;
                    break;
                }
            }

            int greater = -1;

            // Search on the right
            for (int j = index + 1; j < nums2.size(); j++) {

                if (nums2[j] > x) {
                    greater = nums2[j];
                    break;
                }

            }

            ans.push_back(greater);
        }

        return ans;
    }
};