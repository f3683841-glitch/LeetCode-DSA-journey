class Solution {
public:
void subsets(vector<int>&arr,int index,int n, vector<vector<int>>&ans,vector<int>&temp)
{   if(index==n)
     {
        ans.push_back(temp);
        return;
     }


    // not include
    subsets(arr,index+1,n,ans,temp);
    // include
    temp.push_back(arr[index]);
    subsets(arr,index+1,n,ans,temp);
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
      subsets(nums,0,nums.size(),ans,temp);
      return ans;
        
    }
};