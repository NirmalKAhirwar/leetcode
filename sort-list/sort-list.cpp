/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* sortList(ListNode* head) {
        vector<int> ans;
        ListNode* ptr = head;
        while(ptr != NULL)
        {
            ans.push_back(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        sort(ans.begin(), ans.end());
        int i = 0;
        while(ptr != NULL)
        {
            ptr->val = ans[i];
            i++;
            ptr = ptr->next;
        }
        return head;
    }
};