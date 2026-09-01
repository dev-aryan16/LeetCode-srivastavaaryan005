class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int m=nums1.size();
        int n=nums2.size();

        for(int i=0; i<m; i++){
            temp.push_back(nums1[i]);
        }

        for(int i=0; i<n; i++){
            temp.push_back(nums2[i]);
        }

        sort(temp.begin(),temp.end());

       

        int k=temp.size();

        if(k%2!=0){
        int pos=(k+1)/2;
        return temp[pos-1];
        }
        
        int middle1 = temp[(k/ 2) - 1];
        int middle2 = temp[k/2];
    
         return (middle1 + middle2) / 2.0; 
    }
};