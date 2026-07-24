class Solution {
public:
    int uniqueXorTriplets(vector<int>&);
};

int Solution::uniqueXorTriplets(vector<int>& nums)
{
    size_t n = nums.size(); // Getting the maximum value of array; array nums is a permutation from 1 to n.
    
    if (n >= 3)
        return 1 << bit_width(n);   // Every number from 1 to n uses as most n's bit_width(k). Therefore, there cumulative XOR also uses at most k bits.
    else    // when n is 1 or 2,
        return n;   // There aren't enough elements to choose three distinct operands for XOR triplets.

    // Or, this if statements can be shorten as below.
    // return 1 << (bit_width(n) - 3 / (n + 1));
}