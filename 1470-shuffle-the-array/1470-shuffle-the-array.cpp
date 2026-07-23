class Solution
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> ans;   // Creating a new array.

        for(int i = 0, j = n; i < n, j < 2 * n; ++i, ++j)   // Putting each corresponding elements per cycle.
        {
            ans.push_back(nums[i]);  // x1, x2, ...
            ans.push_back(nums[j]);  // y1, y2, ...
        }

        return ans;
    }
};