class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count;
        vector<int> op;
        for(int num: nums) {
            count =0;
            for(int i=0; i< nums.size(); i++) {
                if(nums[i] < num) count ++;
            }
            op.push_back(count);
        }
        return op;
    }
};