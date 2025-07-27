class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int prev=nums[0];
        for(int  i=1;i<n-1;i++){
            if((nums[i]>prev && nums[i]>nums[i+1] )|| (nums[i]<prev && nums[i]<nums[i+1] )) {
                prev=nums[i];
                count++;
            }
    
        }
        return count;
    }
};