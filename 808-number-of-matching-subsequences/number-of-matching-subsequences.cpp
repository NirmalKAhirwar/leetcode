class Solution {
public:
    bool isSubsequence(const std::string &sub, const std::string &main)
    {
        int subIndex = 0;  // Index for the subsequence string
        int mainIndex = 0; // Index for the main string

        while (subIndex < sub.length() && mainIndex < main.length())
        {
            if (sub[subIndex] == main[mainIndex])
            {
                subIndex++; // Move to the next character in subsequence
            }
            mainIndex++; // Always move to the next character in the main string
        }

        // If subIndex reached the end of the subsequence, it means sub is a subsequence of main
        return subIndex == sub.length();
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> charIndices(26); // Stores character indices for 'a' to 'z'
    
    // Preprocess the indices of characters in the main string 's'
    for (int i = 0; i < s.length(); ++i) {
        charIndices[s[i] - 'a'].push_back(i);
    }
    
    int count = 0;
    
    for (const string& word : words) {
        int prevIndex = -1; // The index of the last character found in the main string
        
        bool isSubseq = true;
        for (char c : word) {
            // Binary search for the next occurrence of character 'c'
            auto it = upper_bound(charIndices[c - 'a'].begin(), charIndices[c - 'a'].end(), prevIndex);
            
            if (it == charIndices[c - 'a'].end()) {
                isSubseq = false;
                break;
            }
            
            prevIndex = *it;
        }
        
        if (isSubseq) {
            ++count;
        }
    }
    
    return count;
        
    }
};