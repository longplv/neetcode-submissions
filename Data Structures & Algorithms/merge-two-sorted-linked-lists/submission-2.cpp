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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode Dummy;
        ListNode *RetNode = &Dummy;
        while(list1&&list2){
            if(list1->val < list2->val){
                RetNode->next = list1;
                RetNode = RetNode->next;
                list1 = list1->next;
            }
            else{
                RetNode->next = list2;
                RetNode = RetNode->next;
                list2 = list2->next;
            }
        }
        if(list1 != nullptr){
            RetNode->next = list1;
        }
        else{
            RetNode->next = list2;
        }
        

        return Dummy.next;
    }
};
