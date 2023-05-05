class Solution {
public:
    bool judgeCircle(string moves) {
        if (moves.size() % 2 != 0) {
        return false;
    }
    int i, size = moves.size();
    vector<short> v(4,0); /* U -> 0, D-> 1, L -> 2, R -> 3 */
    for (i = 0; i < size; ++i) {
        if (moves[i] == 'U') {
            ++v[0];
        } else if (moves[i] == 'D') {
            ++v[1];
        } else if (moves[i] == 'L') {
            ++v[2];
        } else if (moves[i] == 'R') {
            ++v[3];
        }
    }
    if (v[0] == v[1] && v[2] == v[3]) {
        return true;
    }
    return false;
    }
};