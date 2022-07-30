class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int op=0, c;
        for(string s: sentences) {
            c=0;
            for(char i: s) {
                if(i == ' ') c++;
            }
            if(c>op) op =c;
        }
        return op+1;
    }
};