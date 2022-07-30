class Solution {
public:
    int minimumSum(int num) {
        vector<int> op;
        while(num) {
            op.push_back(num%10);
            num/=10;
        }
        sort(op.begin(), op.end());
        if(op[0] == 0 && op[1] == 0) return op[2] + op[3];
        else return (op[0]+op[1])*10 + op[2] +op[3];
    }
};