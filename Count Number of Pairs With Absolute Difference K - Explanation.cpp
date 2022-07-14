Count Number of Pairs With Absolute Difference K - "https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/"
EXPLANATION 


#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int i,j, ans=0, abs_ans=0, output = 0;
        int final_ans=0;
        vector<int> ans_size;
        
        for (i=0; i<nums.size(); i++)
        {
            cout<<"\n\n";
            for (j=i+1; j<nums.size(); j++)
            {
                ans = nums[i] - nums[j];
                abs_ans = abs(ans);
                cout<<"\nnums["<<i<<"] - nums["<<j<<"] : ("<<nums[i]<<" - "<<nums[j]<<") = "<<nums[i]-nums[j]<<" | abs_ans : "<<abs_ans;
                
                if (abs_ans == k)
                {
                    cout<<"   --- CORRECT";
                    ans_size.push_back(abs_ans);
                }
            }
        }
    cout<<"\n\nans_size : "<<ans_size.size();
    final_ans = ans_size.size();
    
    cout<<"\n\n";
    return final_ans;
    }
};



int main()
{
    Solution obj;
    
    vector<int> vect = {3,2,1,5,4};
    
    //obj.countKDifference(vect, 1);
    
    cout<<obj.countKDifference(vect, 2);
}
