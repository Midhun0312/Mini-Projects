

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size(), i = 0;
        int j = n - 1, k = 0;
        while (k <= j)
        {
            if (nums[k] == 0)
            {
                swap(nums[k], nums[i]);
                i++;
                k++;
            }
            else if (nums[k] == 2)
            {
                swap(nums[k], nums[j]);
                j--;
            }
            else
                k++;
        }
    }
};