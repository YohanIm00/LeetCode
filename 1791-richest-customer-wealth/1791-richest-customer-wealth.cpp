class Solution {
public:
    int maximumWealth(vector<vector<int>>&);
};

int Solution::maximumWealth(vector<vector<int>>& accounts) 
{
    int result = 0;
    
    for (int i = 0; i < accounts.size(); ++i)
    {
        for (int j = 1; j < accounts[i].size(); ++j)
            accounts[i][j] += accounts[i][j - 1];
        if(accounts[i][accounts[i].size() - 1] > result)
            result = accounts[i][accounts[i].size() - 1];
    }

    return result;
}