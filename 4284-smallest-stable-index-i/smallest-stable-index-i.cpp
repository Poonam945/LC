class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        //for index 0
        int i;
        int n=nums.size();
         int ans2=INT_MIN;
        for(i=0;i<n;i++){
             int ans1=INT_MAX;
           
            for(int j=i;j<n;j++){
                 ans1=min(nums[j],ans1);
               
            }
             ans2=max(nums[i],ans2);
           

        
        if((ans2-ans1)<=k){
            return i;
        }
        }
        
        return -1;
    }
};