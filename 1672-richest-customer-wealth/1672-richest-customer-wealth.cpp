class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0, curr;
        for(vector<int> v : accounts) {
            curr =0;
            for(int a: v) curr+=a;
            if(max<curr) max = curr;
        }
        return max;
    }
};