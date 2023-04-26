#include <iostream>
using namespace std;
#include<vector>
// phone keypad problem:::::::::               https://leetcode.com/problems/letter-combinations-of-a-phone-number/

void permu(vector<vector<int>> &ans, int i, vector<int> nums)
{
    if (i >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    // swap
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        permu(ans, i + 1, nums);
        swap(nums[j], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    permu(ans, index, nums);

    return ans;
}

int main()
{

    // string s="12";
    // int y = s[1]-'0';           //type cast string to int
}