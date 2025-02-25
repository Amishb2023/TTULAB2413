/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode* previous = NULL;
    struct ListNode* original = head;

    while (head != NULL) {
        if (head->val == val) {
            if (previous != NULL)
                previous->next = head->next;
            else
                original = head->next;
        } else {
            previous = head;
        }
        head = head->next;
    }

    return original;
}
