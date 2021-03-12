/* You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807. */

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

        int nowsum = cl1->val + cl2->val;
        int gotbefore = nowsum / 10;

        ListNode* ret = new ListNode(nowsum % 10);
        ListNode* curret;
        curret = ret;

        while (!(cl1->next == nullptr && cl2->next == nullptr))
        {
            if (cl1->next == nullptr)
            {
                nowsum = cl2->next->val;
                cl2 = cl2->next;
            }
            else if (cl2->next == nullptr)
            {
                nowsum = cl1->next->val;
                cl1 = cl1->next;
            }
            else
            {
                nowsum = cl1->next->val + cl2->next->val;
                cl1 = cl1->next;
                cl2 = cl2->next;
            }

            nowsum += gotbefore;
            curret->next = new ListNode(nowsum % 10);
            gotbefore = nowsum / 10;
            curret = curret->next;
        }

        if (gotbefore > 0)
        {
            curret->next = new ListNode(gotbefore % 10);
        }

        return ret;

    }
};
