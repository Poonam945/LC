// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n=nums.size();
//             int countzeros=0;
//             for(int i=0;i<n;i++){
//                 if(nums[i]==0){
//                 countzeros++;
//             }
//             }

//             vector<int>ans;
//             for(int i=0;i<n;i++){
//                 if(nums[i]!=0){
//                 ans.push_back(nums[i]);
//                 }
//             }

//             //Move all zeros to the end
//             while(countzeros--){
//                 ans.push_back(0);
//             }

//             //combine the result
//             for(int i=0;i<n;i++){
//                 nums[i]=ans[i];
//             }

            // space complexity-O(n),since we created a new array(ans)
            // TC-O(n),first we traverse th array nums,to count the no of zeeros it's o(n).. then we again traverse the nums list to store all non zero element in ans..o(n) so o(2n)=o(n)

            //but the optimal one
            class Solution {
public:
  void moveZeroes(vector<int>& nums) {
      int lastNonZeroFoundAt = 0;
      // If the current element is not 0, then we need to
      // append it just in front of last non 0 element we found.
      for (int i = 0; i < nums.size(); i++) {
          if (nums[i] != 0) {
              nums[lastNonZeroFoundAt++] = nums[i];
          }
      }
    // After we have finished processing new elements,
    // all the non-zero elements are already at beginning of array.
    // We just need to fill remaining elements in the array with 0's.
      for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
          nums[i] = 0;
      }
  }
};


//     }
// };