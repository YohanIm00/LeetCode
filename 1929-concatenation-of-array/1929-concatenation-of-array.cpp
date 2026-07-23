class Solution
{
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        int n = nums.size();    // Storing the size of original array.
        vector<int> ans(2 * n);  // Creating a new array which is two times larger than the origin.
        
        for(int i = 0; i < ans.size(); ++i) // Appending elements in original array into new one.
            ans[i] = nums[i % n];   // Using modulo calculation to pick appropriate character.
        
        return ans;
    }
};