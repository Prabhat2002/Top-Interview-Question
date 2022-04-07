METHOD : 1 

class Solution 
{
 public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
            mp[nums[i]].push_back(i);
        for(int i=0;i<n-1;i++)
        {
            auto x=find(nums.begin()+i+1,nums.end(),target-nums[i]);
            if(x!=nums.end())
            {
                if(mp[*x].size()>=2)
                    return {i,mp[*x][1]};
                else
                    return {i,mp[*x][0]};
            }
        }
        return {-1,-1};
     }
 };
 
 METHOD : 2
 
 class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        map<int,vector<int>>mp;
        int n=nums.size();
        map<int,int>mp;
        mp[nums[0]]=0;
        for(int i=1;i<n;i++)
        {
           if(mp.find(target-nums[i])!=mp.end())
               return {mp[target-nums[i]],i};
           mp[nums[i]]=i; 
        }
        return {-1,-1};
    }
};
