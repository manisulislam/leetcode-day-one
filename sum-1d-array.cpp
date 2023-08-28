class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>run;
        int sum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
            run.push_back(sum);
        }
        return run;
    }
};