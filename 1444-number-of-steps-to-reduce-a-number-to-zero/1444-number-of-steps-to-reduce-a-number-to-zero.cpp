class Solution 
{
public:
    int numberOfSteps(int num, int res = 0);
};

int Solution::numberOfSteps(int num, int res)
{
    if (num == 0)
        return res;
    else
    {
        if (num % 2 == 0)
            return numberOfSteps(num / 2, ++res);
        else
            return numberOfSteps(--num, ++res);
    }
}