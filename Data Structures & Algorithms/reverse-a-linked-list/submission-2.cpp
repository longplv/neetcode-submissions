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
    ListNode* reverseList(ListNode* head) {
        ListNode* nextNode = nullptr;
        ListNode* preNode = nullptr;
        while (head != nullptr) {
            nextNode = head->next;
            head->next = preNode;
            preNode = head;
            head = nextNode;
        }
        return preNode;
    }
};
