/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL)
    {
        return headB;
    }
    if(headB == NULL)
    {
        return headA;
    }
    
    
    // Your Code Here
    int l1 = 0, l2 = 0, k = 0;
    ListNode* t1 = headA, *t2 = headB; 
    
    while(t1 != NULL)
    {
        l1++;
        t1 = t1->next;
    }
    while(t2 != NULL)
    {
        l2++;
        t2 = t2->next;
    }
    
    k = abs(l1 - l2);
    t1 = headA;
    t2 = headB;
    
    if(l1 > l2)
    {
        while(k)
        {
            t1 = t1->next;
            k--;
        }
    }
    k = abs(l1 - l2);
    if(l2 > l1)
    {
        while(k)
        {
            t2 = t2->next;
            k--;
        }
    }
    
    while(t1 != NULL && t2 != NULL)
    {
        if(t1 == t2)
        {
            return t1;
        }
        t1 = t1->next;
        t2 = t2->next;
    }
    
    return NULL;

    }
};