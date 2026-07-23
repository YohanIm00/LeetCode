class Solution
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        vector<int> ans;   // Creating a new array.

        for(int i = 0; i < 2 * n; ++i)   // Putting each corresponding elements per cycle.
        {
            if (i % 2 == 0) // For even-numbered indices.
                ans.push_back(nums[i / 2]); // x1, x2, ...
            else    // For odd-numbered indices.
                ans.push_back(nums[n + i /2]);  // y1, y2, ...
        }

        return ans;
    }
};