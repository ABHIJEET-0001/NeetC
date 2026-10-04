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
        if(!List1){
            return list2;
        }
        if(!list2){
            return lists2;
        }
        if(list1->val <= list2->val){
            lists->next = mergeTwoLists(lists->next,list2);
            return list1;
        } else {
            list2 -> next = mergeTwolists(lists, list2->next);
            return list2;
        }
    }
};