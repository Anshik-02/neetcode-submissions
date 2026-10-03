class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (auto &row : matrix) {

            int left = 0;
            int right = row.size() - 1;

            while (left <= right) {

                int mid = left + (right - left) / 2;

                if (row[mid] == target)
                    return true;

                if (target > row[mid])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }

        return false;
    }
};