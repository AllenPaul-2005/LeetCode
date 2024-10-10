#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> max_right(n);
        int prev = 0;
        // Fill max_right array
        for (int i = n - 1; i >= 0; --i) {
            max_right[i] = max(nums[i], prev);
            prev = max_right[i];
        }

        int res = 0, l = 0;
        // Iterate over nums and calculate the maximum ramp width
        for (int r = 0; r < n; ++r) {
            while (nums[l] > max_right[r]) {
                ++l;
            }
            res = max(res, r - l);
        }

        return res;
    }
};
