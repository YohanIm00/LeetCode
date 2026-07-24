class Solution
{
public:
    vector<int> findErrorNums(vector<int>&);
};

vector<int> Solution::findErrorNums(vector<int>& nums)
{
    int n = nums.size();
    vector<int> res(n + 1, 0);  // Creating new vector to count the number of elements.

    int miss = 0, dup = 0;

    for (int i = 0; i < n; ++i)  // Searching original array first.
        res[nums[i]]++;

    for (int i = 1; i < res.size(); ++i) // Finding repetition and lost number based on its indices.
    {
        if (res[i] == 2)
            dup = i;
        if (res[i] == 0)
            miss = i;
    }

    return {dup, miss};
}
