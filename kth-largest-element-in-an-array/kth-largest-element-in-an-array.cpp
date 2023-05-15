class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(),nums.end());
        while(k!=1)
        {
            int y=pq.top();
            pq.pop();
            k--;
        }
        return pq.top();
    }
};