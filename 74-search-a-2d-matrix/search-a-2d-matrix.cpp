class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m=matrix.size();
        // int n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     if(matrix[i][0]<=target && target<=matrix[i][n-1]){
        //         int start=0;
        //         int end=n-1;
        //         while(start<end){
        //             int mid=start+(end-start)/2;
        //             if(matrix[i][mid]==target){
        //                 return 1;
        //             }
        //             else if(matrix[i][mid]<target)
        //             start=mid+1;
        //             else
        //             end=mid-1;
        //         }
        //         return 0;
        //     }
        // }
        // return 0;
        // t.c=o(m+logn)


        int m=matrix.size();//row
        int n=matrix[0].size();//col
        int start=0,end=n*m-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            int row_index=mid/n;
            int col_index=mid%n;
            if(matrix[row_index][col_index]==target){
                return 1;
            }
            else if(matrix[row_index][col_index]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
        
    }
};