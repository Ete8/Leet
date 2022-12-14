class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> op;
        for(int i=1; i<=n; i++) {
            if(i%3==0 && i%5==0) op.push_back("FizzBuzz");
            else if(i%5==0)op.push_back("Buzz");
            else if(i%3==0)op.push_back("Fizz");
            else op.push_back(to_string(i));
        }
        return op;
    }
};