class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, int> p2i;
        map<string, int> w2i;
        istringstream in(s);
        int n = pattern.size(), i = n;
        for (string word; in >> word; --i) {
            if (!i || p2i[pattern[n-i]] != w2i[word])
                return false;
            p2i[pattern[n-i]] = w2i[word] = i;
        }
        return !i;
    }
};