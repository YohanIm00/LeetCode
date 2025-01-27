class Solution
{
public:
    bool canConstruct(string, string);
};

bool Solution::canConstruct(string ransomNote, string magazine)
{
    string& s1 = magazine;
    string& s2 = ransomNote;

    for(int i = 0; i < s1.length(); ++i)
    {
        for(int j = 0; j < s2.length(); ++j)
        {
            if (s1[i] == s2[j])
            {
                s2.erase(j, 1);
                break;
            }
        }
    }

    return s2.empty();
}