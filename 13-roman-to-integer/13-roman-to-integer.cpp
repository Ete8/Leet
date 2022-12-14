class Solution {
public:
    int value(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }  
        return 0;
    }
    int romanToInt(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++) {
            if(value(s[i]) < value(s[i+1])) sum-=value(s[i]);
            else sum += value(s[i]);
        }
        return sum + value(s[s.length()-1]);
    }
};