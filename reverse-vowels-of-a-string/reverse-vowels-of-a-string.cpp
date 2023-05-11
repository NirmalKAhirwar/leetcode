class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int i=0,j=n-1;
        while(i<j)
        {
            while(s[i]!='a' && s[i]!='i' && s[i]!='e' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='I' && s[i]!='E' && s[i]!='O' && s[i]!='U'&& i<j)
            {
                i++;
            }
            while(s[j]!='a' && s[j]!='i' && s[j]!='e' && s[j]!='o' && s[j]!='u' && s[j]!='A' && s[j]!='I' && s[j]!='E' && s[j]!='O' && s[j]!='U' && i<j)
            {
                 j--;
            }
            
            if(i<j)swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};