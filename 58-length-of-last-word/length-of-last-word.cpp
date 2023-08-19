class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;
        int j = i;
        int n = s.length();

        for(i; i >= 0 && s[i] == ' '; i--)
        {
        }
        
        for(j = i; j>=0; j--)
        {
            if(s[j]==' ') break;
        }

        return i-j;
    }
};