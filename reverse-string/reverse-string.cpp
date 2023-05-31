class Solution {
public:
    void reverseString(vector<char>& s) {
       int p=0;int q=s.size()-1;
        while(p<=q){
            swap(s[p],s[q]);
            p++;q--;
        } 
    }
};