vector<int>::iterator i;

class Solution 
{
public:
    vector<int> runningSum(vector<int>&);
};

vector<int> Solution::runningSum(vector<int>& nums) 
{
    for(i = nums.begin() + 1; i != nums.end(); ++i)
        *i += *(i - 1);

    return nums;
}