class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=1;
        int maxi=1;

        for(int i=0; i<n-1; i++){
            if(nums[i+1] == nums[i] + 1){
                cnt++;
            }
            else if(nums[i]==nums[i+1]){

            }
            else{
                cnt=1;
            }
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};