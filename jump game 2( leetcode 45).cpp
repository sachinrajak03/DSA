class Solution {
public:
    int jump(vector<int>& nums) {
        //Declaring size of the nums vector
        int size = nums.size();
        //now making dp vector of size n and initialize it with INT_MAX
        vector<int>dp(size,1e9);
        dp[size-1]= 0;
        
        for(int i= size-2;i>=0;i--){
            for(int j = i+1;j<=min(size-1,i+nums[i]);j++){
                dp[i]= min(dp[i],dp[j]+1);
            }
        }
        return dp[0];
    }
};
