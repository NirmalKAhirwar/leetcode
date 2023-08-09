class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& P, int k) {
        auto euclidean = [](auto& p) { return p[0] * p[0] + p[1] * p[1]; };

        priority_queue<pair<int, int>> pq;
        for(int i = 0; i < size(P); i++) {
            pq.emplace(euclidean(P[i]), i);
            if(size(pq) > k) pq.pop();
        }
        vector<vector<int>> ans(k);
        for(int i = 0; i < k; i++) 
            ans[i] = P[pq.top().second], pq.pop();
        
        return ans;
    }
};