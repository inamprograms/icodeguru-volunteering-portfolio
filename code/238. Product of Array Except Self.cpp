class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> res(n, 1);
        // Assuming both prefix product and postfix product as 1
        int pre = 1, post = 1;
        
        // claculating prefix product for each element in nums
        for (int i = 0; i < n; i++) {
            // storing prefix product of ith element in res array at ith index 
            res[i] = pre;
            // claculate the prefix product for next element (i + 1)th
            pre = pre * nums[i];
        }
        
         // claculating postfix product and result for each element in nums
        for (int i = n - 1; i >= 0; i--) {
            // storing product of array except self (nums[i]) into res at ith index
            //      Postfix product * Prefix Product
            res[i] = post * res[i];
            
            // claculate the postfix product for (i - 1)th element 
            post = nums[i] * post;
        }
        
        return res;
    }
};