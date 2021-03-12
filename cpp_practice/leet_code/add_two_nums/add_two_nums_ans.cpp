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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* cl1 = l1;
        ListNode* cl2 = l2;
        int gotbefore = 0;
        
        ListNode* ret = new ListNode();
        ListNode* curret = ret;
        
        while (cl1 != nullptr || cl2 != nullptr)
        {
            int x = (cl1 != nullptr) ? cl1->val : 0;
            int y = (cl2 != nullptr) ? cl2-> val : 0;
            int sum = gotbefore + x + y;
            gotbefore = sum / 10;
            curret->next = new ListNode(sum % 10);
            curret = curret->next;
            if (cl1 != nullptr) cl1 = cl1->next;
            if (cl2 != nullptr) cl2 = cl2->next;
            
        }
        
        if (gotbefore > 0)
        {
            curret->next = new ListNode(gotbefore);
        }
        
        return ret->next;     
        
    }
};
