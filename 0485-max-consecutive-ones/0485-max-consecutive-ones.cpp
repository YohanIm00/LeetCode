class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int curr = 0, max = 0;  // Setting two variables to reserve values.

        for (int i = 0; i < nums.size(); ++i)   // Iterating to search in the array nums.
        {
            if (nums[i] == 0)   // Once it meets 0.
            {
                max = curr > max ? curr : max; // Assigning current 1's streaks into max after the comparison.
                curr = 0;   // Resetting the value of curr as 0.
            }
            else    // While it's seeting 1s subsequently.
                curr++; // Increasing the value of curr.
        }

        return curr > max ? curr : max; // Comparing the last case. arrays can be terminated with consecutive 1s.
    }
};