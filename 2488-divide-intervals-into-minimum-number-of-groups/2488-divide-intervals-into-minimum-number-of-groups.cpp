class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start, end;

        // Extract start and end times
        for (const auto& interval : intervals) {
            start.push_back(interval[0]);
            end.push_back(interval[1]);
        }

        // Sort the start and end times
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int groups = 0, res = 0;
        int i = 0, j = 0;

        // Process intervals
        while (i < intervals.size()) {
            if (start[i] <= end[j]) {
                groups++;
                i++;
            } else {
                groups--;
                j++;
            }
            res = max(res, groups);
        }

        return res;
    }
};