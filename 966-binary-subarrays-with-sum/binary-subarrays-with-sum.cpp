class Solution {
public:
    int atmost(vector<int> &nums, int goal){
        if(goal < 0)
    return 0;
           int n=nums.size();
        int cnt=0;
        int l=0;
        int sum=0;
        for(int r=0; r<n; r++){
            sum=sum+nums[r];

            while(sum>goal){
                sum-=nums[l];
                l++;
                
            }
            cnt=cnt+(r-l+1);
        }
        return cnt;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // this is the brute force approach
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0; i<n; i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum=sum+nums[j];
        //         if(sum==goal){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

       return atmost(nums,goal)-atmost(nums,goal-1);
    }
};