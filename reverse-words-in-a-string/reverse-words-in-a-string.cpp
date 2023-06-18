class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);   // Disable synchronization between C++ input/output streams and C standard streams for improved execution speed
        cout.tie(nullptr);   // Untie the cout stream from other streams for improved execution speed
        cin.tie(nullptr);    // Untie the cin stream from other streams for improved execution speed

        int n = s.size();   // Get the size of the input string
        string ans = "";   // Initialize an empty string to store the reversed words
        int i = n - 1;   // Start from the last character of the input string

        while (i >= 0) {
            if (s[i] == ' ') {
                i--;   // If the current character is a space, move to the next character
            }
            else {
                string temp = " ";   // Initialize a temporary string with a space character
                int j = i;
                while (j >= 0 && s[j] != ' ') {
                    temp += s[j];   // Append each character to the temporary string in reverse order
                    j--;
                }
                reverse(temp.begin(), temp.end());   // Reverse the characters in the temporary string
                ans += temp;   // Append the reversed word to the final string
                i = j;   // Update the index to continue from the next word
            }
        }

        ans.pop_back();   // Remove the extra space character appended at the end

        return ans;   // Return the reversed words as the output
    }
};