class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int> ans(2);
       
        int len = nums.size();   
        vector<int> freq(len, 0);
        
        for (int i = 0; i < len; i++){
            freq[nums[i]-1]++;
        }
        
        for (int i = 0; i < len; i++){
            if (freq[i] == 0){
                ans[1] = i+1;
            }
            if (freq[i] == 2){
                ans[0] = i+1;
            }
        }
        return ans; 
    }
};