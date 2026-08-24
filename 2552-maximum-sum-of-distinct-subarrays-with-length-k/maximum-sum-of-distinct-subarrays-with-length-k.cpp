class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
         long long maxi = 0;
         long long sum=0;
         unordered_map<int,int> freq;

        for(int r=0; r<n; r++){
             sum=sum+nums[r];
                freq[nums[r]]++;

         if(r-l+1==k){


            if(freq.size()==k){
                maxi=max(sum,maxi);
            }

            sum-=nums[l];
            freq[nums[l]]--;
         
    

                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                l++;
            }
        }
        return maxi;
    }
};