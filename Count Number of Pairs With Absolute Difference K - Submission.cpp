Count Number of Pairs With Absolute Difference K - "https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/"
SUBMISSION 


class Solution 
{
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int i,j, ans=0, abs_ans=0, output = 0;
        int final_ans=0;
        vector<int> ans_size;
        
        for (i=0; i<nums.size(); i++)
            for (j=i+1; j<nums.size(); j++)
            {
                ans = nums[i] - nums[j];
                abs_ans = abs(ans);
              
                if (abs_ans == k)
                    ans_size.push_back(abs_ans);
            }
    final_ans = ans_size.size();
    return final_ans;
    }
};
